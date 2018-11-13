#include <iostream>
#include "task1.h"
int main()
{
	const size_t N = 6;
	int *A = new int[N] {-5, 3, -2, 4, 1, 6};
	msort(A, N);
	for (size_t i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
}