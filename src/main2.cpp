#include "test2.h"
int main()
{
	setlocale(LC_ALL, "rus");
	const size_t n = 5;
	int* ptrI;
	char** ptrC;
	ptrI = createArr<int, n>(gen);
	for (int i = 0; i < n; i++) cout << *(ptrI + i) << ' ';
	cout << '\n';
	ptrC = createArr<char*, n>(gen);
	for (int i = 0; i < n; i++) cout << *(ptrC+i) << ' ';
	system("pause");
	return 0;
}