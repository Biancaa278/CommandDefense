#include <iostream>
#include "Canvas.h"

int main()
{
    Canvas canvas(25, 25);
    canvas.DrawLine(1, 2, 6, 7, '&');
    canvas.DrawRect(10, 11, 14, 15, '^');
    canvas.FillRect(10, 11, 14, 15, '#');
    canvas.DrawCircle(17, 18, 3, '@');
    canvas.Print();
}