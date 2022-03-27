#include "Number.h"
#include <cstring>
#include <iostream>

using namespace std;

int CharToInt (char c) {
    if (c >= '0' && c <= '9')
        return (int)(c - '0');
    else
        return (int)(c - 'A' + 10);
}

char IntToChar (int num) {
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

Number::~Number() {
    delete number;
    number = nullptr;
}

char& Number::operator[](int index) {
    return number[index];
}


int Number::GetDigitsCount() {
    return strlen(this->number);
}

int Number::GetBase() {
    return this->base;
}

void Number::Print() {
    cout << this->number << "\n";
}