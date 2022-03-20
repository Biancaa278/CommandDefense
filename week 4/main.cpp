#include <iostream>
#include "Sort.h"
using namespace std;
int main()
{
    int n;
    int minim, maxim;
    cin >> n >> minim >> maxim;
    Sort p = { n,minim,maxim };

    p.InsertSort(1);
    p.Print();
    cout << '\n';

    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    Sort q = { a, n };
    q.QuickSort(1, 0, n - 1);
    q.Print();
    cout << '\n';

    char vect[100];
    cin >> vect;
 
    Sort z = { vect };
    z.BubbleSort(0);
    z.Print();

}
