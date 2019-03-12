#include "task3.h"
#include <iostream>
using namespace std;

int change(int val)
{
	return (val / 2);
}

int main()
{
	const int n = 5;
	int arr[5]{ 11, 22, 33, 44, 55 };
	map<int,n>(arr,change);
	for (auto i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	getchar();
	return 0;
}