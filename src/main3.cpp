//
// Created by Константин Чернышев on 01.11.18.
//


#include "task3.h"
#include <iostream>


int change(int i) {
    return i*4;
}

int main() {
    const size_t n = 6;

    int a[n]{1, 2, 3, 4, 5, 6};
    map<int, n>(a, change);

    for (auto i : a)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}