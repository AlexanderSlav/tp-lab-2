#include <iostream>

using namespace std;

template <typename T, unsigned int N = 10>

void map (T arr[], T (* change)(T)){

    for (unsigned int i = 0; i < N; i++){
        arr[i] = change (arr[i]);
    }

}