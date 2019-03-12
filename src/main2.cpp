//
// Created by Артем Аросланкин on 06/11/2018.
//


#include "task2.h"
#include <iostream>

using namespace std;

template<class T>
T gen()
{
    static int t = 48;
    return t++;
}

template<>
char* gen()
{
    static unsigned t = 0;
    t++;
    char* s = new char[t + 1];

    for(size_t i = 0; i < t; i++)
        s[i] = '0' + i;
    s[t] = '\0';

    return s;
}


int main() {
    const size_t n = 5;
    auto *a = createArr<int, n>(&gen);


    for (size_t i = 0; i < n; i++ )
        cout << a[i] << " ";
    cout << std::endl;

    return 0;
}