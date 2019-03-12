#pragma once
#include <iostream>

using namespace std;

template <typename T, size_t N>
T *map(T(&mass)[N], T(*change)(T))
{
	for (int i = 0; i < N; i++)
		mass[i] = change(mass[i]);
	return mass;
}
