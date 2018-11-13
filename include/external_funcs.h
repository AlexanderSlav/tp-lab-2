#ifndef external_h
#define external_h

#include <iostream>
#include <cstring>

	/*=====[Функция вывода на экран для удобства]=====*/
	template <typename T>
	void disp(T *value, size_t n)
	{
		for (size_t i = 0; i < n; i++) { cout << value[i] << " "; }
		cout << endl;
	}

#endif