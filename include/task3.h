#include <iostream>
using namespace std;

template <typename T>
void map(T array[], T (*changer)(T), unsigned int size){
  for (unsigned int i = 0; i < size; i++) {
    array[i] = changer(array[i]);
  }
  return;
}
