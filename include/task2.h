#include <iostream>
template <typename T, size_t n>
T * createArr(T(*gen)()) {
	T * newm = new T[n];
	for (int i = 0; i < n; i++)
		newm[i] = gen();
	return newm;
}