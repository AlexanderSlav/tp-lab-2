#pragma once

#include <iostream>
using namespace std;
template<class T, int n>

T * createArr(T(*gen)())
{
	T * mass = new T[n];
	for (int i = 0; i < n; i++) {
		mass[i] = gen();
	}
	return mass;
}
