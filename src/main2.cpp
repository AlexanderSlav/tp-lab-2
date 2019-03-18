//
// Created by Александр Славутин on 2019-03-12.
//

#include "task2.h"

#include <iostream>


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


int main()
{
    const size_t size = 10;
    int* array1;
    array1 = createArr <int, size> (gen);
    for (auto i(0); i < size; i++)
    {
        std::cout << array1[i] << ' ';
    }
    delete[] array1;

    char* array2;
    array2 = createArr <char, size> (gen);
    std::cout << std::endl;
    for (auto i(0); i < size; i++)
    {
        std::cout << array2[i] << ' ';
    }
    delete[] array2;

    return 0;
}