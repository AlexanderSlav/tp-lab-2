#include "task3.h"
#include <iostream>
#include <cstring>
using namespace std;
template<class T>
T change(T val)
{
	return val + 1;
}

template<>
char* change(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

int main() {
	const size_t n = 5;
	int arr1[n]{ 1, 2, 3, 4, 5 };
	map<int, n>(arr1, change);

	int expected1[n]{ 2, 3, 4, 5, 6 };

	cout << "arr1" << endl;
	for (size_t i = 0; i < n; i++)
		cout << expected1[i] << " and " << arr1[i] << endl;

	double arr2[5]{ 1, 2.2, 3.3, 4.4, 5 };
	map<double, n>(arr2, change);

	double expected2[n]{ 2, 3.2, 4.3, 5.4, 6 };

	cout << "arr2" << endl;
	for (size_t i = 0; i < n; i++)
		cout << expected2[i] << " and " << arr2[i] << endl;

	char arr3[n]{ '1', '2', '3', '4', '5' };
	map<char, n>(arr3, change);

	char expected3[n]{ '2', '3', '4', '5', '6' };

	cout << "arr3" << endl;
	for (size_t i = 0; i < n; i++)
		cout << expected3[i] << " and " << arr3[i] << endl;

	char* arr4[n];
	char* expected4[n];
	for (size_t i = 0; i < n; i++)
	{
		arr4[i] = new char[i + 2];
		expected4[i] = new char[i + 2];
		for (size_t j = 0; j < i + 1; j++)
		{
			arr4[i][j] = '0' + i;
			expected4[i][j] = '1' + i;
		}
		arr4[i][i + 1] = '\0';
		expected4[i][i + 1] = '\0';
	}
	map<char*, n>(arr4, change);

	cout << "arr4" << endl;
	for (size_t i = 0; i < n; i++)
	{
		cout << "explen = " << strlen(expected4[i]) << " reallen = " << strlen(arr4[i]) << endl;
		if (strcmp(expected4[i], arr4[i]))
			for (size_t j = 0; j <= strlen(expected4[i]); j++)
				cout << expected4[i] << " and " << arr4[i] << endl;
	}

}
