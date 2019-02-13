#include <iostream>
using namespace std;

template <typename T, const unsigned int size>
void map(T array[], T (*changer)(T)){
  for (unsigned int i = 0; i < size; i++) {
    array[i] = changer(array[i]);
  }
  return;
}
