//
// Created by Константин Чернышев on 01.11.18.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <cstddef>

template <class T, size_t n>
void map(T a[], T(*change)(T)) {

    for (size_t i = 0; i < n; i++) {
        a[i] = change(a[i]);
    }
}

#endif //TASK1_TASK3_H
