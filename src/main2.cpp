
#include "task2.h"
#include <iostream>
#include <cstring>

using namespace std;
template<class T>
T gen(){
	static int t = 48;
	return t++;
}

template<>
char* gen(){
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (int i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';
	return s;
}
int main()
{
		const size_t n = 5;
		int* arr1;
		char *arr2;
		char **arr3;
		arr1 =createArr<int, n>(gen);
		for (int i = 0; i < n; i++){
			cout << arr1[i]<<"  ";
		}
		cout << endl;

		arr2 = createArr<char, n>(gen);
		for (int i = 0; i < n; i++){
			cout << arr2[i] << "  ";
		}
		cout << endl;
		
		arr3 = createArr<char*, n>(gen);
		delete[] arr1;
		delete[] arr2;
		delete[] arr3;
}
