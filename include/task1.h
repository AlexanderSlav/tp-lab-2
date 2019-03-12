//
// Created by Артем Аросланкин on 06/11/2018.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <iostream>
#include <cstring>

template <class T>
bool cmp(T& a, T& b) {
    if (a < b)
        return true;
    else
        return false;
}

template<>
bool cmp(char* &a, char* &b) {
    if (strlen(a) < strlen(b))
        return true;
    else
        return false;
}



template <class T>
void msort(T* a, size_t n) {
    if (n < 2) // end rec
        return;

    msort(a, n / 2); //left part rec

    msort(a + n / 2, n - n / 2); //right part rec

    T * tmp = new T[n]; //temp array for sort
    int left = 0, right = 0;

    while ((left < n / 2) && (right < n - n / 2)) {
        if (cmp(a[left], a[n / 2 + right])) {
            tmp[left + right] = a[left];
            left++;
        }
        else {
            tmp[left + right] = a[n / 2 + right];
            right++;
        }
    }
    while (left < n / 2) {
        tmp[left + right] = a[left];
        left++;
    }
    while (n / 2 + right < n) {
        tmp[left + right] = a[n / 2 + right];
        right++;
    }

    for (int i = 0; i < n; i++)
        a[i] = tmp[i];

    delete[] tmp;
}

#endif //TASK1_TASK1_H
