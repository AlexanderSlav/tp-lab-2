#include <iostream>
using namespace std;

//function return pointer to filled array

template <typename T, size_t N>
T *createArr(T(*gen)())
{
	T *arr = new T[N];
	for (int i = 0; i < N; i++)
		arr[i] = gen();
	return arr;
}