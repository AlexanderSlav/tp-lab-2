#include "task3.h"
template<class T>
	T change(T val)
	{
		return val + 1;
	}

template<>
	char* change(char* val)
	{
		size_t n = strlen(val);
		for(size_t i = 0; i < n; i++)
			val[i] = val[i] + 1;
		return val;
	}

int main()
{
	setlocale(LC_ALL, "rus");
	const size_t n = 5;
	int arr1[n]{ 1, 2, 3, 4, 5 };
	map<int, n>(arr1, change);
	for (int i = 0; i < n; i++)cout << arr1[i] << ' ';
	cout << '\n';
	double arr2[5]{ 1, 2.2, 3.3, 4.4, 5 };
	map<double, n>(arr2, change);
	for (int i = 0; i < n; i++)cout << arr2[i]<<' ';
	cout << '\n';
	char arr3[n]{ '1', '2', '3', '4', '5' };
	map<char, n>(arr3, change);
	for (int i = 0; i < n; i++)cout << arr3[i] << ' ';
	cout << '\n';
	system("pause");
	return 0;

}