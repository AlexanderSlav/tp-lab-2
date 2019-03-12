#include <cstring>
#include <iostream>
using namespace std;

template<class T>
void merge(T *arr, int left, int mid, int right)
{
	int l = 0, r = 0;
	T *tmp = new T[right - left];
	while ((left + l) < mid && (mid + r) < right) {
		if (arr[left + l] < arr[mid + r])
		{
			tmp[l + r] = arr[left + l];
			l++;
		}
		else
		{
			tmp[l + r] = arr[mid + r];
			r++;
		}
	}
	while (left + l < mid)
	{
		tmp[l + r] = arr[left + l];
		l++;
	}
	while (mid + r < right)
	{
		tmp[l + r] = arr[mid + r];
		r++;
	}
	for (auto i = 0; i < right - left; i++)
	{
		arr[left + i] = tmp[i];
	}
	delete tmp;
	return;
}

template<>

void merge(char* arr[], int left, int mid, int right)
{
	int l = 0, r = 0;
	char**  tmp = new char*[sizeof(char) * (right - left)];
	while ((left + l) < mid && (mid + r) < right) {
		if (strlen(arr[left + l]) < strlen(arr[mid + r]))
		{
			for (auto i = 0; arr[left + l][i] != '0'; i++)
			{
				tmp[l + r] = arr[left + l];
			}

			l++;
		}
		else
		{
			tmp[l + r] = arr[mid + r];
			r++;
		}
	}
	while (left + l < mid)
	{
		tmp[l + r] = arr[left + l];
		l++;
	}
	while (mid + r < right)
	{
		tmp[l + r] = arr[mid + r];
		r++;
	}
	for (auto i = 0; i < right - left; i++)
	{
		arr[left + i] = tmp[i];
	}
	delete tmp;
	return;
}

template<class T>

void msort(T arr[], int n)
{
	for (int i = 1; i <= n; i *= 2)
	{
		for (int j = 0; j <= n - i; j += (2 * i))
		{
			int right = (j + 2 * i) < n ? (j + 2 * i) : n;
			merge(arr, j, j + i, right);
		}

	}
	return;
}

