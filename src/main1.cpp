#include "task1.h"

int main()
{
	const size_t n = 5;
	int *arr = new int[n] {5, 3, 2, 4, 1};
	const int n2 = 8;
	msort(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
