#include "task1.h"
#include <iostream>
using namespace std;
int main()
{
	const size_t n = 6;
	int *val1 = new int[n] {5, 3, 2, 4, 1, 6};
	msort(val1, n);
	for (int i = 0; i < n; i++) cout << val1[i] << " ";
	cout << endl;
	double val2[n]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	msort(val2, n);
	for (int i = 0; i < n; i++) cout << val2[i] << " ";
	cout << endl;
	char* val3[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(val3, n);
	for (int i = 0; i < n; i++) cout << val3[i] << " ";
}
