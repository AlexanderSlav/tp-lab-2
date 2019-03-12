#ifndef TASK_1_H
#define TASK_1_H
#include<iostream>
#include <cstring>
template<typename T>
void merge(T merged[], int n, T L[], int leftLen, T R[], int rightLen) {
	int i = 0;
	int j = 0;
	while (i < leftLen || j < rightLen) {
		if (i < leftLen & j < rightLen) {
			if (L[i] <= R[j]) {
				merged[i + j] = L[i];
				i++;
			}
			else {
				merged[i + j] = R[j];
				j++;
			}
		}
		else if (i < leftLen) {
			merged[i + j] = L[i];
			i++;
		}
		else if (j < rightLen) {
			merged[i + j] = R[j];
			j++;
		}
	}
}
template<>
void merge(char* merged[], int n, char* L[], int leftLen, char* R[], int rightLen) {
	int i = 0;
	int j = 0;
	while (i < leftLen || j < rightLen) {
		if (i < leftLen & j < rightLen) {
			if (strlen(L[i]) < strlen(R[j])) {
				merged[i + j] = L[i];
				i++;
			}
			else {
				merged[i + j] = R[j];
				j++;
			}
		}
		else if (i < leftLen) {
			merged[i + j] = L[i];
			i++;
		}
		else if (j < rightLen) {
			merged[i + j] = R[j];
			j++;
		}
	}
}
template<typename T>
void msort(T *a, int n)
{
	if (n > 1)
	{
		int mid = n / 2;
		int rend = n - mid;
		T* L = new T[mid];
		T* R = new T[rend];
		for (int i = 0; i < n; i++) {
			if (i < mid) {
				L[i] = a[i];
			}
			else {
				R[i - mid] = a[i];
			}
		}
		msort(L, mid);
		msort(R, rend);
		merge(a, n, L, mid, R, rend);
	}

}
template<>
void msort(char* *a, int n)
{
	if (n > 1)
	{
		int mid = n / 2;
		int rend = n - mid;
		char** L = new char*[mid];
		char** R = new char*[rend];
		for (int i = 0; i < n; i++) {
			if (i < mid) {
				L[i] = a[i];
			}
			else {
				R[i - mid] = a[i];
			}
		}
		msort(L, mid);
		msort(R, rend);
		merge(a, n, L, mid, R, rend);
	}
}
#endif