#include "task1.h"


int main() 
{
	const int n1 = 5;
	int *val1 = new int[n1] {5, 3, 2, 4, 1};
	const int n2 = 8;
	double val2[n2]{ 4.12, 7.13, 0.4, 7.14, 2.1, -1,7,-2};
	const int n3 = 6;
	char* val3[n3]{ (char*)"af", (char*)"fffsffff2", (char*)"f", (char*)"fddf", (char*)"vvv", (char*)"fr" };
	msort(val1, n1);
	msort(val2, n2);
	msort(val3, n3);

	for (auto i = 0; i < n1; i++)
	{
		cout << val1[i] << " ";
	}
	cout << endl;
	
	for (auto i = 0; i < n2; i++)
	{
		cout << val2[i] << " ";
	}
	cout << endl;
	for (auto i = 0; i < n3; i++)
	{
		cout << val3[i] << " ";
	}

	cout << endl;
	getchar();
	return 0;
}