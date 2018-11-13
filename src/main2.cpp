#include "task2.h"
#include <iostream>
using namespace std;
template<class T>
T gen()
{
	static int t = 48;
	return t++;
}

int main() {
	const size_t N = 5;

	auto *arr = createArr<int, N>(gen);


	for (size_t i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	delete[]arr;
}