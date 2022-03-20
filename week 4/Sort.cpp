#include "Sort.h"
#include <stdlib.h> 
#include <time.h>  


Sort::Sort(int nr_elements, int minim, int maxim)
{
	srand((unsigned) time(nullptr));
	for (i = 0; i < nr_elements; i++)
	{
		do
		{
			int x = rand() % maxim;
		} while (x <= min);
		this->vect[i] = x;
	}
	this->nr_elements = nr_elements;
}

Sort::Sort()
{
}

Sort::Sort(int vect[100], int nr_elements)
{
}

Sort::Sort(int count, ...)
{
}

Sort::Sort(char sir[100])
{
}

void Sort::InsertSort(bool ascendent)
{
}

void Sort::QuickSort(bool ascendent)
{
}

void Sort::BubbleSort(bool ascendent)
{
}

void Sort::Print()
{
}

int Sort::GetElementsCount()
{
	return 0;
}

int Sort::GetElementFromIndex(int index)
{
	return 0;
}
