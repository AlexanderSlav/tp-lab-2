#pragma once
#include <iostream>
template<class T, size_t N>
T * map(T(&arr)[N], T(*change)(T)) {
	for (int i = 0; i < N; i++) {
		arr[i] = change(arr[i]);
	}
	return arr;
}