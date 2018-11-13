#pragma once
#include <iostream>

using namespace std;

template<typename T, int N>
T* createArr(T (*gen)())
{
	T* mas = new T[N]; 
	for (auto i = 0; i < N; i++)
	{
		mas[i] = gen(); 
	}
	return mas;
}
