
#include "task2.h"
#include <iostream>

using namespace std;

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
