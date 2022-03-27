#pragma once
#include <cstring>
using namespace std;

class Number {
    char* number;
    int base;

public:
    Number(const char* value, int base); // where base is between 2 and 16
    ~Number();

    char& operator[](int index);

    void SwitchBase(int newBase);
    void Print();
    int GetDigitsCount(); // returns the number of digits for the current number
    int GetBase();        // returns the current base
};