#include "task3.h"
#include <iostream>
using namespace std;

int change(int i)
{
	return i + 1;
}

int main() 
{
	const size_t N = 5;
	int arr[N]{ 1, 2, 3, 4, 5 };
	map<int, N>(arr, change);
	for (auto i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
}