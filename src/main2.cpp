#include "task2.h"
#include <iostream>
using namespace std;

int gen()
{
	static int a = 1;
	a *= 2;
	return a;
}


int main()
{
	const int N = 11;
	int* p;
	p = createArr<int, N>(gen);
	for (auto i = 0; i < N; i++)
	{
		cout << p[i] <<" ";
	}
		
	getchar();
	return 0;
}

