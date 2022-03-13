#include <iostream>
#include "Math.h"
using namespace std;

int main()
{
    Math p;
    const char* ana = "123";
    const char* mere = "100";
    int a, b, c;
    double d, e, f;
    cin >> a >> b >> c;
    cout << p.Add(a, b) << '\n';
    cout << p.Add(a, b, c) << '\n';
    cout << p.Mul(a, b) << '\n';
    cout << p.Mul(a, b, c) << '\n';
    cout << p.Add(6, 1, 2, 3, 4, 5, 6) << '\n';
    cout << p.Add(ana, mere);
    cin >> d >> e >> f;
    cout << p.Add(d, e) << '\n';
    cout << p.Add(d, e, f) << '\n';
    cout << p.Mul(d, e) << '\n';
    cout << p.Mul(d, e, f) << '\n';
}
