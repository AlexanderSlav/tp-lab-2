#include <iostream>
#include "task2.h"
using namespace std;
int main()
{
	const size_t N = 5;
	double* a;
	a = createArr<double, N>(gen2);
	for (int i = 0; i < N; i++)
		cout << a[i] << endl;

	char** a2;
	a2 = createArr<char*, N>(gen2);
	for (int i = 0; i < N; i++)
	{
		cout << a2[i] << endl;
	}
}
