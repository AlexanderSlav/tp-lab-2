#pragma once
#include <iostream>

template <typename T, size_t N>
T *createArr(T(*gen)())
{
	T *mass = new T[N];
	for (int i = 0; i < N; i++)
		mass[i] = gen();
	return mass;
}
