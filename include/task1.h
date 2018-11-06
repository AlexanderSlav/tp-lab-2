#include <iostream>
#include <algorithm> 
#include <cstring>

using namespace std;

//compare function for all data types

template <typename T>
bool cmp(T a, T b) {
	return (a < b);
}

//compare function for char

bool cmp(char *a, char *b) {
	return (strlen(a) < strlen(b));
}


template<typename T>
void merge(T *arr, int lbound, int middle, int rbound)
{
	// k1 & k2 are counters for moving into two sections of array

	int k1 = 0;
	int k2 = 0;

	// creating array to fill it with sorted elements
	T *temp = new T[rbound - lbound + 1];

	// merging 2 sections of mass while  one of them is not empty
	while (lbound + k1 < middle && middle + k2 < rbound) {
		if (cmp(arr[lbound + k1], arr[middle + k2]))
		{
			temp[k1 + k2] = arr[lbound + k1];
			k1++; 
		}
		else
		{
			temp[k1 + k2] = arr[middle + k2];
			k2++;
		}
	}

	// fill the remaining part of the considered numbers,
	// first while hold true if left part of 2 sections isn't clear
	// second part - if second

	while (lbound + k1 < middle)  
	{
		temp[k1 + k2] = arr[lbound + k1];
		k1++;
	}

	while (middle + k2 < rbound)  
	{
		temp[k1 + k2] = arr[middle+k2];
		k2++;
	}

	//filling our initial array with sorted elements

	for (int i = 0; i < k1 + k2; i++)
		arr[lbound + i] = temp[i];

	//deleting temporary array

	delete[] temp;
}

template <typename T>

//iterational algorithm for merging

void sort(T *arr, int n) {
	for (int i = 1; i < n ; i = i*2)
		for (int j = 0; j < n - i; j = j+ 2 * i)
			merge(arr, j, j + i, min(j + 2 * i, n));
}