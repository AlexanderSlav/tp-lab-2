#include <iostream>
using namespace std;
template <typename T,const size_t n>
void map(T arr[], T(*f)(T)) {
	for (int i = 0; i < n; i++)
		arr[i] = f(arr[i]);
}