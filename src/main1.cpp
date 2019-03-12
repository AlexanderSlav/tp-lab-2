#include <iostream>
#include <cstring>
#include <cstddef>
#include "task1.h"
using namespace std;

int main()
{
	const size_t n = 6;
	int val [n] = {5, 3, 2, 4, 1, 6};
	msort(val, n);
	for (size_t i = 0; i < n; i++)
		cout << val[i] << ' ';
	return 0;
}