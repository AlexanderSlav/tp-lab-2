#include <iostream>
#include "task3.h"
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

int main()
{
	cout << "test1" << endl;
	const size_t n1 = 5;
	int array1[n1] = { 1, 2, 3, 4, 5 };
	map<int, n1>(array1, change);
	int expected1[n1]={ 2, 3, 4, 5, 6 };

	cout << "expected - ";
	for (size_t i = 0; i < n1; i++) {
		cout << expected1[i]<<" ";
	}
	cout << "    result array - ";
	for (size_t i = 0; i < n1; i++) {
		cout << array1[i]<<" ";
	}cout << endl;


	cout << "test2" << endl;
	const size_t n2 = 5;
	double array2[n2]{ 1, 2.2, 3.3, 4.4, 5 };
	map<double, n2>(array2, change);
	double expected2[n2] = { 2, 3.2, 4.3, 5.4, 6 };

	cout << "expected - ";
	for (size_t i = 0; i < n1; i++) {
		cout << expected2[i]<<" ";
	}
	cout << "    result array - ";
	for (size_t i = 0; i < n1; i++) {
		cout << array2[i]<<" ";
	}cout << endl;
		

	cout << "test3" << endl;
	const size_t n3 = 5;
	char array3[n3]{ '1', '2', '3', '4', '5' };
	map<char, n3>(array3, change);
	char expected3[n3]{ '2', '3', '4', '5', '6' };

	cout << "expected - ";
	for (size_t i = 0; i < n1; i++) {
		cout << expected2[i]<< " ";
	}
	cout << "    result array - ";
	for (size_t i = 0; i < n1; i++) {
		cout << array2[i]<<" ";
	}cout << endl;
	
	cout << "test4" << endl;
	const size_t n4 = 5;
	char* array4[n4];
	char* expected4[n4];
	for (size_t i = 0; i < n4; i++)
	{
		array4[i] = new char[i + 2];
		expected4[i] = new char[i + 2];
		for (size_t j = 0; j < i + 1; j++)
		{
			array4[i][j] = '0' + i;
			expected4[i][j] = '1' + i;
		}
		array4[i][i + 1] = '\0';
		expected4[i][i + 1] = '\0';
	}
	map<char*, n4>(array4, change);

	for (size_t i = 0; i < n4; i++)
	{
		cout << "expected strlen - " << strlen(expected4[i]) << "  " << "array strlen - " << strlen(array4[i]) << endl;
		if (strcmp(expected4[i], array4[i])) {
			for (size_t j = 0; j <= strlen(expected4[i]); j++) {
				cout << expected4 << "   " << array4;
			}
		}
	}
}