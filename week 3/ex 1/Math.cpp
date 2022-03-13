#include "Math.h"
#include <iostream>
#include <cstdarg>
#include <cstring>

using namespace std;

int Math::Add(int a, int b)
{
	return a+b;
}

int Math::Add(int a, int b, int c)
{
	return a+b+c;
}

int Math::Add(double a, double b)
{
	return a+b; 
}

int Math::Add(double a, double b, double c)
{
	return a+b+c;
}

int Math::Mul(int a, int b)
{
	return a*b;
}

int Math::Mul(int a, int b, int c)
{
	return a*b*c;
}

int Math::Mul(double a, double b)
{
	return a*b;
}

int Math::Mul(double a, double b, double c)
{
	return a*b*c;
}

int Math::Add(int count, ...)
{
	int sum=0;
	va_list args;
	va_start(args, count);
	for (int i = 0; i < count; i++) 
	{
		int x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return sum;
}

char* Math::Add(const char* a, const char* b)
{
	if (a==nullptr || b==nullptr)
	    return nullptr;
	int n = strlen(a), m = strlen(b), k=0, carry=0, i, j;
	char* c=nullptr;
	for (i = n - 1, j = m - 1; i >= 0 && j >= 0; i--, j--)
	{
		c[k] = (a[i] - '0' + b[j] - '0' + carry) % 10 + '0';
		k++;
		carry = (a[i] - '0' + b[j] - '0') / 10;
	}
	cout << k<<" ";
	for (i = 0; i < k; i++)
		cout << c[i];
	cout << " ";
	c[k] = NULL;
	return c;
}
