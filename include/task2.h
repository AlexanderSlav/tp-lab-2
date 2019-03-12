#include <iostream>

using namespace std;

template <typename T, unsigned int N = 10>

T * createArr (T (* gen)()){

    auto * arr = new T[N];

    for (unsigned int i = 0; i < N; i++){
        arr[i] = gen();
    }

    return arr;

}
