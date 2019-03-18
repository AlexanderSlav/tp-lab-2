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
    int* first_array;
    first_array = createArr <int, size> (gen);
    for (auto i(0); i < size; i++)
    {
        std::cout << first_array[i] << ' ';
    }
    std::cout<< std::endl;
    delete[] first_array;

    char** second_array;
    second_array = createArr <char*, size> (gen);
    for (auto i(0); i < size; i++)
    {
        std::cout << second_array[i] << ' ';
    }
    delete[] second_array;

    return 0;
}