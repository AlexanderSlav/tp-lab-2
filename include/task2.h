//
// Created by Константин Чернышев on 01.11.18.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <cstddef>

template <class T, int n>
T* createArr(T (*gen)()) {
    T* tmp = new T[n];

    for (size_t i = 0; i < n; i++)
        tmp[i] = gen();

    return tmp;
}

#endif //TASK1_TASK2_H
