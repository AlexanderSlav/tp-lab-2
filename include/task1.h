#pragma once
#include <iostream>
using namespace std;


template<class P>
bool cmp(P a, P b)
{
	return a < b;
}

template<>
bool cmp(char* a, char*b)
{
	return (strlen(a) < strlen(b));
}

template<class T>


void msort(T * a, int size)
{
	if (size == 1)
	{
		return;
	}
	int	mid = size / 2;
	msort(a, mid);
	msort(a + mid, size - mid);
	T * temp = new T[size];
	int left = 0;
	int right = 0;
	while ((left < mid) && (mid + right < size)) {
		if (cmp(a[left], a[mid + right])) {
			temp[left + right] = a[left];
			left++;
		}
		else {
			temp[left + right] = a[mid + right];
			right++;
		}
	}
	while (left < mid) {
		temp[left + right] = a[left];
		left++;
	}
	while (mid + right < size) {
		temp[mid + right] = a[mid + right];
		right++;
	}
	for (int i = 0; i < size; i++) {
		a[i] = temp[i];
	}
}