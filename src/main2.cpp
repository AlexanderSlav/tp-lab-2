#include <iostream>
#include <cstddef>
#include "task2.h"
using namespace std;

int gen()
{
	static int t = 48;
	return t++;
}

int main()
{
	const size_t n = 5;
	int * arr = createArr<int, n>(gen);
	for (size_t i = 0; i < n; i++)
		cout << arr[i] << ' ';
	delete[] arr;
    return 0;
}