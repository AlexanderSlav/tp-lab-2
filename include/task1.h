#include <iostream>
#include <cstring>
template <typename T>
bool cmp(T a, T b) {
	if (a < b) return true;
	else return false;
}

template <>
bool cmp(char *a, char *b) {
	if (strlen(a) < strlen(b)) return true;
	else return false;
}

template <typename T>
void msort(T * a, size_t n) {
	if (n < 2) return;
	msort(a, n / 2);  //left half
	msort(a + n / 2, n - n / 2);  //right half
	int it1 = 0, it2 = 0;
	T * result = new T[n];
	while ((it1 < n / 2) && (it2 < n - n / 2)) {
		if (cmp(a[it1], a[n / 2 + it2])) {
			result[it1 + it2] = a[it1];
			it1 += 1;
		}
		else {
			result[it1 + it2] = a[n / 2 + it2];
			it2 += 1;
		}
	}
	while (it1 < n / 2) {
		result[it1 + it2] = a[it1];
		it1 += 1;
	}
	while (n / 2 + it2 < n) {
		result[it1 + it2] = a[n / 2 + it2];
		it2 += 1;
	}
	for (int i = 0; i < n; i++) a[i] = result[i];
	delete[] result; //delete mass
}
