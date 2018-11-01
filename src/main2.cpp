//
// Created by Константин Чернышев on 01.11.18.
//


#include "task2.h"
#include <iostream>


int gen() {
    return -12;
}

int main() {
    const size_t n = 10;

    auto *a = createArr<int, n>(&gen);


    for (size_t i = 0; i < n; i++ )
        std::cout << a[i] << " ";
    std::cout << std::endl;

    return 0;
}