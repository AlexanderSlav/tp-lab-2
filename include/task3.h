#pragma once
#include <iostream>

using namespace std;

template<class T>
T change(T val)
{
	return val + 1;
}

template<>
char* change(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

template <typename T, size_t N>
T *map(T(&mass)[N], T(*change)(T))
{
	for (int i = 0; i < N; i++)
		mass[i] = change(mass[i]);
	return mass;
}