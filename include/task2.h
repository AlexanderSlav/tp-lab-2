#pragma once
#include <iostream>
template<class T, size_t N>
T * createArr(T(*gen)()) {
	T * array = new T[N];   //формирую новый массив

	for (int i = 0; i < N; i++) {  //вызываю gen
		array[i] = gen();
	}
	return array;
}
