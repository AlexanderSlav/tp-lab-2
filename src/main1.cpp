#include <iostream>
#include "task1.h"
using namespace std;

int main()
{
	const size_t n = 6;
	double val[n]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	msort(val, n);
	for (size_t i = 0; i < n; i++)
		cout << val[i] << "|";
}
