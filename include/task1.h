#pragma once
#include <iostream>
#include <cstring>
using namespace std;

template<class K>
int cmp(K a, K b) {
	if (a < b) {
		return true;
	}
	else {
		return false;
	}
}
template<>
int cmp(char* a, char*b) {
	int str_a = strlen(a);
	int str_b = strlen(b);
	if (str_a < str_b) {
		return true;
	}
	else {
		return false;
	}
}

template<class T>
void msort(T * a, int n) {
	if (n == 1) { return; }

	int	middle = n / 2;
	msort(a, middle);  //слева
	msort(a + middle, n - middle); //спарва

	T * newa = new T[n];  
	int c1 = 0;  //для левой стороны
	int c2 = 0;  // для правой стороны
	while ((c1 < middle) && (middle + c2 < n)) {
		if (cmp(a[c1], a[middle + c2])) {
			newa[c1 + c2] = a[c1];
			c1++;
		}
		else {
			newa[c1 + c2] = a[middle + c2];
			c2++;
		}
	}
	while (c1 < middle) {
		newa[c1 + c2] = a[c1];
		c1++;
	}
	while (middle + c2 < n) {
		newa[middle + c2] = a[middle + c2];
		c2++;
	}

	for (int i = 0; i < n; i++) {  //вывод
		a[i] = newa[i];
		//cout << a[i] << " ";
	}//cout << endl;

	delete[] newa;
}