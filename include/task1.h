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

    size_t const leftsize = size / 2;
    size_t const rightsize = size - leftsize;

    msort(&array[0], leftsize); // Sort the right half
    msort(&array[leftsize], rightsize); // Sort the left half

    T* tmp = new T[size]; // Result array

    size_t lidx(0), ridx(leftsize), idx(0); // Index variables for left half, right half and temporary array

    while ((lidx < leftsize) || (ridx < size)) // Iterate over the whole array
    {
        if ((lidx < leftsize) && (ridx < size)) // Check if there still are number in both halves
        {
            if (compare(array[lidx], array[ridx])) // The value from the left half is bigger
            {
                tmp[idx++] = std::move(array[lidx]);
                lidx++;
            }

            else
            {
                tmp[idx++] = std::move(array[ridx]);
                ridx++;
            }
        }

        else if (lidx < size / 2) // Values remain only in the left half
        {
            tmp[idx++] = std::move(array[lidx]);
            lidx++;
        }

        else
        {
            tmp[idx++] = std::move(array[ridx]);
            ridx++;
        }
    }


    std::copy(tmp ,&tmp[size] ,array);


    delete[] tmp;
}

