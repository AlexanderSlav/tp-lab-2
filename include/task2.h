#pragma once

#include <iostream>
#include <cstring>
using namespace std;

template <typename T, unsigned int size>
T* createArr(T (*generator)()) {
  T* newArr = new T[size];
  T key = 2;
  for (unsigned int i=0; i < size; i++) {
    newArr[i]=generator(/*key*/);
  }
  return newArr;
}
