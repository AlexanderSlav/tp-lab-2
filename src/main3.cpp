#include "task3.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const size_t n = 5;
	int arr[n]{ 1, 2, 3, 4, 5 };
	map<int, n>(arr, change2);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	double arr2[n]{ 1, 2.2, 3.3, 4.4, 5 };
	map<double, n>(arr2,change2);
	for (int i = 0; i < n; i++)
		cout << arr2[i] << " ";
	cout << endl;
	return 0;
}