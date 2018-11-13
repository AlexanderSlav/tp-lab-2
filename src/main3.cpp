#include "task3.h"

template<class T>
T change(T val)
{
	return val + 1;
}

int main()
{
	const int n = 5;
	int arr[n]{ 1, 2, 3, 4, 5 };

	map<int, n>(arr, change);
	for (auto i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	getchar();
	return 0;
}