#include <iostream>
#include <cstring>
using namespace std;

template <class T>
bool cmp(T &a, T &b) {
	return a < b;
}

template<>
bool cmp(char* &a, char* &b) {
	return strlen(a) < strlen(b);
}

template<class T>
void msort(T * A, int N)
{
	if (N <= 1)
	{
		return;
	}
	int	mid = N / 2;
	msort(A, mid);
	msort(A + mid, N - mid);
	T * tmp = new T[N];
	int l = 0, r = 0;
	while ((l < mid) && (mid + r < N)) {
		if (cmp(A[l], A[mid + r])) {
			tmp[l + r] = A[l];
			l++;
		}
		else {
			tmp[l + r] = A[mid + r];
			r++;
		}
	}
	while (l < mid) {
		tmp[l + r] = A[l];
		l++;
	}
	while (mid + r < N) {
		tmp[mid + r] = A[mid + r];
		r++;
	}
	for (int i = 0; i < N; i++) {
		A[i] = tmp[i];
	}
}
