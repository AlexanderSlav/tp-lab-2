#include "task2.h"

template<class T>
T gen()
{
	static int t = 48;
	return t++;
}

int main()
{
	const int N = 11;
	int* Arr;
	Arr = createArr<int, N>(gen);
	for (auto i = 0; i < N; i++)
	{
		cout << Arr[i] << "";

	}

	getchar();
	return 0;
}
