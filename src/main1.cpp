#include "task1.h"
#include <iostream>

int main()
{
	const size_t n = 6;
	char* val[n]{ (char*)"fff2", (char*)"ffff", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(val, n);

	for (int i = 0; i < n; i++)
		cout << val[i] << ' ';

	return 0;
}