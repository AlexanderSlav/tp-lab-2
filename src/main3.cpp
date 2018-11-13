#pragma once

#include <iostream>
#include "../include/external_funcs.h"
#include "../include/task3.h"

using namespace std;

/*=====[Функция преобразования элементов]=====*/
template <typename T>
T change(T value)
{
	return ++value;
}

int main()
{
	const size_t n = 5;
	int arr[n]{ 32, 1, 5, 73, 80 };

	map<int, n>(arr, change);
	disp(arr, n);

	return 0;
}