#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <stdlib.h>
#include <time.h>
#include <cstdarg>
#include <iostream>
#include <cstring>

Sort::Sort(int number_of_elements, int minim, int maxim) {
    srand((unsigned)time(nullptr));
    for (int i = 0; i < number_of_elements; i++) {
        int x = rand() % maxim;
        while (x <= minim) {
            x = rand() % maxim;
        }
        this->vector[i] = x;
    }
    this->number_of_elements = number_of_elements;
}

Sort::Sort(int a[100], int number_of_elements) {
    this->number_of_elements = number_of_elements;
    for (int i = 0; i < number_of_elements; i++)
        this->vector[i] = a[i];
}

Sort::Sort() : Sort(vector, number_of_elements) {
}


Sort::Sort(int count, ...) {
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        int x = va_arg(args, int);
        this->vector[i] = x;
    }
    this->number_of_elements = count;
    va_end(args);
}

Sort::Sort(char string[100]) {
    char* p;
    char cuv[100];
    int ct = 0;
    p = strtok(string, ",");
    while (p) {
        strcpy(cuv, p);
        int numar = 0;
        for (int i = 0; i < strlen(cuv); i++)
            numar = numar * 10 + (cuv[i] - '0');
        //std::cout << numar << '\n';
        this->vector[ct] = numar;
        ct++;
        p = strtok(NULL, ",");
    }
    this->number_of_elements = ct;
}

void Sort::InsertSort(bool ascendent) {
    if (ascendent == 1) {
        int i, key, j;
        for (i = 1; i < number_of_elements; i++) {
            key = vector[i];
            j = i - 1;
            while (j >= 0 && vector[j] > key) {
                vector[j + 1] = vector[j];
                j = j - 1;
            }
            vector[j + 1] = key;
        }
    }
    else {
        int i, key, j;
        for (i = 1; i < number_of_elements; i++) {
            key = vector[i];
            j = i - 1;
            while (j >= 0 && vector[j] < key) {
                vector[j + 1] = vector[j];
                j = j - 1;
            }
            vector[j + 1] = key;
        }
    }
}

int pivot(int st, int dr, int v[1005])
{
    int piv = v[dr];
    int i = st - 1;
    for (int j = st; j < dr; ++j)
        if (v[j] < piv)
        {
            i++;
            int aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }

    int aux = v[i + 1];
    v[i + 1] = v[dr];
    v[dr] = aux;
    return i + 1;
}



void Sort::QuickSort(bool ascendent, int st, int dr) {

        if (st < dr)
        {
            int p = pivot(st, dr, this->vector);
            QuickSort(1, st, p - 1);
            QuickSort(1, p + 1, dr);
        }

}

void Sort::BubbleSort(bool ascendent) {
    int ok = 0;
    int aux;
    if (ascendent == 1) {
        while (ok == 0) {
            ok = 1;
            for (int i = 0; i < number_of_elements - 1; i++)
                if (this->vector[i] > this->vector[i + 1]) {
                    ok = 0;
                    aux = this->vector[i + 1];
                    this->vector[i + 1] = this->vector[i];
                    this->vector[i] = aux;
                }
        }
    }
    else {
        while (ok == 0) {
            ok = 1;
            for (int i = 0; i < number_of_elements - 1; i++)
                if (this->vector[i] < this->vector[i + 1]) {
                    ok = 0;
                    aux = this->vector[i + 1];
                    this->vector[i + 1] = this->vector[i];
                    this->vector[i] = aux;
                }
        }
    }
}

void Sort::Print() {
    for (int i = 0; i < number_of_elements; i++)
        std::cout << vector[i] << " ";
}

int Sort::GetElementsCount() {
    return number_of_elements;
}

int Sort::GetElementFromIndex(int index) {
    return vector[index];
}
