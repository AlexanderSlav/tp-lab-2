#pragma once
#include <cstring>

template <class T>
bool cmp(T a, T b) {
	if (a < b) return true;
	else return false;
}
template <>
bool cmp(char *a, char *b) {
	if (strlen(a) < strlen(b)) return true;
	else return false;
}
template <class T>
void msort(T * a, size_t n) {
	if (n < 2) return;
	int mid = n / 2;
	msort(a, mid);  
	msort(a + mid, n - mid);  
	int i = 0, j = 0;
	T *mas = new T[n];
	while ((i < mid) && (j < n - mid)) {
		if (cmp(a[i], a[mid + j])) {
			mas[i + j] = a[i];
			i++;
		}
		else {
			mas[i + j] = a[mid + j];
			j++;
		}
	}
	while (i < mid) {
		mas[i + j] = a[i];
		i++;
	}
	while (mid + j < n) {
		mas[i + j] = a[mid + j];
		j++;
	}
	for (int i = 0; i < n; i++){
		a[i] = mas[i];
	}
	delete[] mas; 
}