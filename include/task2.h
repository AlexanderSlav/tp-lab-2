#include <iostream>
using namespace std;
template<class T>

template<typename T, const size_t N>
T* createArr(T(*f)()) {
	T* ptr = new T[N];
	for (int i = 0; i < N; i++)
		*(ptr + i) = f();
	return ptr;
}