//
// Created by Артем Аросланкин on 06/11/2018.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <iostream>

template <class T, size_t N>
void map(T(&a)[N], T(*change)(T)) {
    for (int i = 0; i < N; i++)
        a[i] = change(a[i]);
}

#endif //TASK1_TASK3_H
