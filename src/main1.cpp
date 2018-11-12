#include"task1.h"
#include <iostream>

using namespace std;
int main()
{
	const size_t n = 6;
	int *val = new int[n] {5, 3, 2, 4, 1, 6};
	msort(val, n);

	const size_t n2 = 6;
	double val2[n2]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	msort(val2, n2);

	const size_t n3 = 6;
	char* val3[n3]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(val3, n3);
}