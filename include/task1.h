//
// Created by Константин Чернышев on 01.11.18.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <cstring>
#include <iostream>
#include <cstddef>

template <class T>
bool cmp(T &a, T &b) {
    return a < b;
}

template<>
bool cmp(char* &a, char* &b) {
    return strlen(a) < strlen(b);
}


template <class T>
void msort(T a[], size_t n) {
    if (n <= 1)
        return;

    size_t const left_n = n / 2;
    size_t const right_n = n - left_n;

    msort(a + 0, left_n);
    msort(a + left_n, right_n);

    T* tmp = new T[n];

    size_t l = 0, r = left_n, i = 0;  // left, right, and temporary pointer

    while (l < left_n || r < n) {
        if ( cmp(a[l], a[r]) ) {
            tmp[i++] = a[l++];
        }
        else {
            tmp[i++] = a[r++];
        }

        if (l == left_n) {
            while(i < n)
                tmp[i++] = a[r++];
            break;
        }
        if (r == n) {
            while(i < n)
                tmp[i++] = a[l++];
            break;
        }
    }


    for (size_t i = 0; i < n; i++)
        a[i] = tmp[i];

    delete[] tmp;
}

#endif //TASK1_TASK1_H
