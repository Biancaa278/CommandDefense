#include "Canvas.h"
#include <iostream>
#include <string.h>

using namespace std;

Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
	Clear();
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
    for (int i = y - ray; i <= y + ray; i++) 
    {
        int v = ray * ray - (i - y)*(i - y);
        v = sqrt(v);
        int v_1 = x + v, v_2 = x - v;
        a[i][v_1] = ch; a[i][v_2] = ch;
    }
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{

}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
    int i, j;
    for (i = left; i <= right; i++)
    {
        a[i][top] = ch;
        a[i][bottom] = ch;
    }
    for (j = top; j <= bottom; j++)
    {
        a[left][j] = ch;
        a[right][j] = ch;
    }
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
    int i, j;
    for (i = left + 1; i < right; i++)
        for (j = top + 1; j < bottom; j++)
            a[i][j] = ch; 
}

void Canvas::SetPoint(int x, int y, char ch)
{
    a[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
    int dx, dy, p, x, y;
    dx = x2 - x1;
    dy = y2 - y1;

    x = x1;
    y = y1;

    p = 2 * dy - dx;

    while (x <= x2) {
        if (p >= 0) {
            SetPoint(x, y, ch);
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        }
        else {
            SetPoint(x, y, ch);
            p = p + 2 * dy;
        }
        x = x + 1;
    }
}

void Canvas::Print()
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}

void Canvas::Clear()
{
	memset(a, ' ', sizeof(a));
}
