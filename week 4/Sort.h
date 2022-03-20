class Sort

{
    // add data members
    int nr_elements;
    int vect[100];

public:
    // add constuctors
    Sort(int nr_elements, int minim, int maxim);
    Sort();
    Sort(int vect[100], int nr_elements);
    Sort(int count, ...);
    Sort(char sir[100]);
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
}