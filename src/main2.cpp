#include "task2.h"
#include <iostream>
using namespace std
template<class T>
T gen()
{
	static int t = 48;
	return t++;
}

template<>
char* gen()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';

	return s;
}

int main() {
	const size_t n = 5;
	int* arr1;
	arr1 = createArr<int, n>(gen);
	for (int i = 0; i < n; i++) cout << arr1[i] << " ";
	cout << endl;
	char* arr2;
	arr2 = createArr<char, n>(gen);
	for (int i = 0; i < n; i++) cout << arr2[i] << " ";
	cout << endl;
	char *expected2 = new char[n] {48, 49, 50, 51, 52};
	for (int i = 0; i < n; i++) cout << expected2[i] << " ";
	cout << endl;
	char** arr3;
	arr3 = createArr<char*, n>(gen);

	char** expected3 = new char*[n];
	for (size_t i = 0; i < n; i++)
	{
		expected3[i] = new char[i + 2];
		for (size_t j = 0; j < i + 1; j++)
			expected3[i][j] = '0' + j;
		expected3[i][i + 1] = '\0';
	}

	for (size_t i = 0; i < n; i++)
	{
		cout << "strlenEXP = " << strlen(expected3[i]) << endl << "strlenREAL = " << strlen(arr3[i]) << endl;
		if (strcmp(expected3[i], arr3[i]))
			for (size_t j = 0; j <= strlen(expected3[i]); j++)
				cout << expected3[j] << " | " << arr3[j] << endl;
	}
}
