#pragma once
#include <iostream>

using namespace std;

template<typename T, int N>

void map(T arr[], T(*change)(T))
{
	for (auto i = 0; i < N; i++)
	{
		arr[i] = change(arr[i]);
	}
	return;
}
