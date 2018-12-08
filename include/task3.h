#include <iostream>
#include <cstddef>

template <typename T, size_t n>
void map(T (&arr)[n], T (*change)(T)) {
	for (size_t i = 0; i < n; i++)
		arr[i] = change(arr[i]);
}