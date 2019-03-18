//
// Created by Александр Славутин on 2019-03-12.
//

#pragma once

#include <cstddef>

template <typename T, size_t size>
T* createArr(T (*gen)())
{
    T* array = new T[size];
    for (size_t i(0); i < size; i++)
        array[i] = gen();
    return array;
}