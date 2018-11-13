#ifndef TASK3h
#define TASK3h

#include <iostream>
#include <cstring>

	/*=====[Функция преобразования map]=====*/
	template <class T, size_t n>
	void map(T(&arr)[], T(*change)(T))
	{
		for (size_t i = 0; i < n; i++)
		{
			arr[i] = change(arr[i]);
		}
	}

#endif