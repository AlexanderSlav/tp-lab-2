//
// Created by Александр Славутин on 2019-03-12.
//
#pragma once
#include <iostream>
#include <functional>
#include <memory>
#include <cstring>

template <typename T>
bool compare(T a, T b)
{
    return a < b;
}

bool compare(char* a, char* b)
{
    return strlen(a) < strlen(b);
}

template <typename T>
void msort(T* array, size_t size)
{
    if (size < 2) // Stop the recursion
        return;

    msort(&array[0], size / 2); // Sort the right half
    msort(&array[size/2], size - (size / 2)); // Sort the left half

    T* tmp = new T[size]; // Result array

    size_t lidx(0), ridx(size / 2), tidx(0); // Index variables for left half, right half and temporary array

    while ((lidx < size / 2) || (ridx < size)) // Iterate over the whole array
    {
        if ((lidx < size / 2) && (ridx < size)) // Check if there still are number in both halves
        {
            if (compare(array[lidx], array[ridx])) // The value from the left half is bigger
            {
                tmp[tidx++] = array[lidx];
                lidx++;
            }

            else
            {
                tmp[tidx++] = array[ridx];
                ridx++;
            }
        }

        else if (lidx < size / 2) // Values remain only in the left half
        {
            tmp[tidx++] = array[lidx];
            lidx++;
        }

        else
        {
            tmp[tidx++] = array[ridx];
            ridx++;
        }
    }

    for (size_t i(0); i < size; i++)
        array[i] = tmp[i];

    delete[] tmp;
}

