#pragma once
#include <iostream>
#include <cstring>

using namespace std;

int min(int a, int b)
{
	int minimum;
	if (a > b) minimum = b;
	else minimum = a;
	return minimum;
}

template <typename T>
bool compare(T a, T b)
{
	return (a < b);
}

bool compare(char *a, char *b)
{
	return (strlen(a) < strlen(b));
}


template <typename T>
void merge(T *arr, int left, int middle, int right)
{
	int c1 = 0, c2 = 0;
	T *temp = new T[right - left + 1];
	int k = 0;
	while (left + c1 < middle && middle + c2 < right)
	{
		if (compare(arr[left + c1], arr[middle + c2]))
		{
			temp[k] = arr[left + c1];
			c1++;
			k++;
		}
		else
		{
			temp[k] = arr[middle + c2];
			c2++;
			k++;
		}
	}

	while (left + c1 < middle)
	{
		temp[k] = arr[left + c1];
		k++;
		c1 = c1 + 1;
	}

	while (middle + c2 < right)
	{
		temp[k] = arr[middle + c2];
		k++;
		c2 = c2 + 1;
	}

	for (int i = 0; i < k; i++)
		arr[left + i] = temp[i];

	delete[] temp;

}


template <typename T>
void msort(T *arr, int n)
{
	for (int i = 1; i <= n; i = i * 2)
		for (int j = 0; j < n - i; j = j + 2 * i)
			merge(arr, j, j + i, min(j + 2 * i, n));
}
