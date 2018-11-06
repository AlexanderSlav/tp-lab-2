#include "task2.h"
#include <iostream>

using namespace std;

int main()
{
	const size_t n = 5;
	char* arr;
	arr = createArr<char, n>(gen);
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	return 0;
}