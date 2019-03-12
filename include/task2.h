#ifndef TASK2h
#define TASK2h

#include <iostream>
#include <cstring>

	/*=====[Функция возвращающая в массив результат выполнения внеш. ф-ии gen()]=====*/
	template <typename T, size_t N>
	T* createArr(T(*gen)())
	{
		T* arr = new T[N];
		for (size_t i = 0; i < N; i++) arr[i] = gen();
		return arr;
	}

#endif