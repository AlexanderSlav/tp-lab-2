#pragma once
#include <cstring>
#include <iostream>
using namespace std;




template<typename N>
void merge(N arr[], int left, int mid, int right)
{
	int left_itr = 0, right_itr = 0;
	N *tmp_arr = new N[right - left];
	while ((left + left_itr) < mid && (mid + right_itr) < right) {
		if (arr[left + left_itr] < arr[mid + right_itr])
		{
			tmp_arr[left_itr + right_itr] = arr[left + left_itr];
			left_itr++;
		}
		else
		{
			tmp_arr[left_itr + right_itr] = arr[mid + right_itr];
			right_itr++;
		}
	}
	while (left + left_itr < mid) 
	{
		tmp_arr[left_itr + right_itr] = arr[left + left_itr];
		left_itr++;
	}
	while (mid + right_itr < right)
	{
		tmp_arr[left_itr + right_itr] = arr[mid + right_itr];
		right_itr++;
	}
	for (auto i =0; i < right-left; i++)
	{
		arr[left+i] = tmp_arr[i];
	}
	delete tmp_arr;
	return;
}

template<>

void merge( char* arr[], int left, int mid, int right)
{
	int left_itr = 0, right_itr = 0;
	char**  tmp_arr = new char*[sizeof(char) * (right-left)];
	while ((left + left_itr) < mid && (mid + right_itr) < right) {
		if (strlen(arr[left + left_itr]) < strlen(arr[mid + right_itr]))
		{
			for(auto i=0;arr[left + left_itr][i]!='0';i++)
			{
				tmp_arr[left_itr + right_itr] = arr[left + left_itr];
			}
				
			left_itr++;
		}
		else
		{
			tmp_arr[left_itr + right_itr] = arr[mid + right_itr];
			right_itr++;
		}
	}
	while (left + left_itr < mid)
	{
		tmp_arr[left_itr + right_itr] = arr[left + left_itr];
		left_itr++;
	}
	while (mid + right_itr < right)
	{
		tmp_arr[left_itr + right_itr] = arr[mid + right_itr];
		right_itr++;
	}
	for (auto i = 0; i < right - left; i++)
	{
		arr[left + i] = tmp_arr[i];
	}
	delete tmp_arr;
	return;
}

template<typename T>

void msort(T arr[], int size)
{
	for (auto i = 1; i <= size; i *= 2) 
	{
		for (auto j = 0 ; j <= size - i; j += (2 * i)) 
		{
			int right = (j + 2 * i) < size ? (j + 2 * i) : size;
			merge(arr, j, j + i, right);
		}
			
	}
	return;
}

