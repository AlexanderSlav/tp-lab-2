#include <iostream>
#include "task2.h"
using namespace std;

int main()
{
	const size_t n = 5;
	char* arr;
	arr = createArr<char, n>(gen);
	for (size_t i = 0; i < n; i++) {
		cout << arr[i] << "|";
	}
}