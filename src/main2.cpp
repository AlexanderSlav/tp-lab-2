
#include <iostream>
#include <cstring>
#include"task2.h"
using namespace std;

template <class T>
T gen() {
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

int main()
{
	const size_t n = 5;
	int* array;
	array=createArr<int, n>(gen);
	cout << "test1"<<endl;
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}cout << endl;

    cout << "test2"<<endl;
	const size_t n2 = 5;
	char* arr;
	arr =createArr<char, n2>(gen);
	for (int i = 0; i < n2; i++) {
		cout << arr[i] << " ";
	}cout << endl;

    cout << "test3" << endl;
	const size_t n3 = 5;
	char** array3;
	array3 = createArr<char*, n3>(gen);
	char** expected3 = new char*[n3]; //expected array
	for (size_t i = 0; i < n3; i++)
	{
		expected3[i] = new char[i + 2];
		for (size_t j = 0; j < i + 1; j++)
			expected3[i][j] = '0' + j;
		expected3[i][i + 1] = '\0';
	}
	for (size_t i = 0; i < n3; i++)
	{
		cout<<"expected strlen - "<< strlen(expected3[i])<<"  "<<"array strlen - "<<strlen(array3[i])<<endl;
		if (strcmp(expected3[i], array3[i])) {
			for (size_t j = 0; j <= strlen(expected3[i]); j++) {
				cout << expected3 << "   " << array3;
			}
		}		
	}
}