//
// Created by Константин Чернышев on 01.11.18.
//


#include "task1.h"
#include <iostream>


int main() {

    const size_t n = 15;
    auto *a = new int[n];
    for (size_t i = 0; i < n; i++ ) {
        a[i] = i * i % n;
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;


    msort( a, n );


    for (size_t i = 0; i < n; i++ )
        std::cout << a[i] << " ";
    std::cout << std::endl;

    return 0;
}
