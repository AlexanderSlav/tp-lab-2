    //
// Created by Александр Славутин on 2019-03-12.
//
#pragma once
#include <iostream>
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
    if (size == 1)
       return;


    size_t const leftsize = size / 2;
    size_t const rightsize = size - leftsize;

    msort(&array[0], leftsize); // Sort the left half
    msort(&array[leftsize], rightsize); // Sort the right half

    T* tmp = new T[size]; // Temporary array for result

    size_t lidx(0), ridx(leftsize), idx(0); // lidx - for the left half, ridx - for the right half,
    // idx - for the tmp array

    while ((lidx < leftsize) || (ridx < size))
    {
        if ((lidx < leftsize) && (ridx < size))
        {
            if (compare(array[lidx], array[ridx]))
            {
                tmp[idx++] = array[lidx];
                lidx++;
            }

            else
            {
                tmp[idx++] = array[ridx];
                ridx++;
            }
        }

        else if (lidx < leftsize)
        {
            tmp[idx++] = array[lidx];
            lidx++;
        }

        else
        {
            tmp[idx++] = array[ridx];
            ridx++;
        }
    }
    std::copy(tmp, &tmp[size], array);
    delete[] tmp;
}

