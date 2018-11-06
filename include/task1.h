#include <iostream>
#ifndef TASK_1_H
#define TASK_1_H
template<typename T>
void merge(T merged[], int lenD, T L[], int lenL, T R[], int lenR) {
	int i = 0;
	int j = 0;
	while (i < lenL || j < lenR) {
		if (i < lenL & j < lenR) {
			if (L[i] <= R[j]) {
				merged[i + j] = L[i];
				i++;
			}
			else {
				merged[i + j] = R[j];
				j++;
			}
		}
		else if (i < lenL) {
			merged[i + j] = L[i];
			i++;
		}
		else if (j < lenR) {
			merged[i + j] = R[j];
			j++;
		}
	}
}
template<>
void merge(char* merged[], int lenD, char* L[], int lenL, char* R[], int lenR) {
	int i = 0;
	int j = 0;
	while (i < lenL || j < lenR) {
		if (i < lenL & j < lenR) {
			if (strlen(L[i]) <= strlen(R[j])) {
				merged[i + j] = L[i];
				i++;
			}
			else {
				merged[i + j] = R[j];
				j++;
			}
		}
		else if (i < lenL) {
			merged[i + j] = L[i];
			i++;
		}
		else if (j < lenR) {
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
		int* L = new int[mid];
		int* R = new int[rend];
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