#pragma once
class Sort {
    // add data members
private:
    int vector[100];
    int number_of_elements;

public:

    Sort(int number_of_elements, int minim, int maxim);
    Sort();
    Sort(int a[100], int number_of_elements);
    Sort(int count, ...);
    Sort(char string[100]);
    // add constuctors

    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false, int st = 0, int dr = 0);
    void BubbleSort(bool ascendent = false);
    void Print();
    int GetElementsCount();
    int GetElementFromIndex(int index);
};
