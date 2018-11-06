#ifndef TASK2_H
#define TASK2_H
#include <iostream>
using namespace std;

template<class T>
T gen2()
{
	static int t = 48;
	return t++;
}

template<>
char* gen2()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';

	return s;
}
template<typename T, size_t N>
T * createArr(T(*gen)(void))
{
	T * a = new T[N];
	for (size_t i = 0; i < N; ++i)
	{
		a[i] = (*gen)(); //или можно просто gen()
	}
	return a;
}
#endif 