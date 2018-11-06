//
// Created by Артем Аросланкин on 06/11/2018.
//
#include <cstdio>
#include <iostream>
#include "task1.h"

using namespace std;

int main() {
    size_t n = 6;
    char* a[6]{(char*)"xcasdss", (char*)"wew2", (char*)"y", (char*)"fv", (char*)"mms", (char*)"kjhlhj"};
    // int n2=9
    // int* a = new int[n2]{9, 8 , 7, 6, 5, 4, 3, 2, 1};
    // msort(a, n2);
    //  double a[n]{123.0, 0.0, 6.34, 1.5, 2.28, -4};

    msort(a, n);

    for (size_t i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
        cout << endl;
    return 0;
}