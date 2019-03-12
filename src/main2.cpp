#pragma once

#include <iostream>
#include "../include/external_funcs.h"
#include "../include/task2.h"

using namespace std;

/*=====[Внешняя шаблонная функция]=====*/
template <typename T>
T gen()
{
	static int t = 2;
	return t*((++t) + 1);//3*(3 + 1) = 12
}

int main()
{
	const size_t N = 15;

	int* arr;
	arr = createArr <int, N>(gen);
	disp(arr, N);

	delete[] arr;
	return 0;
}