#include <iostream>
#include <string.h>
using namespace std;
template <typename S>
bool cmp(S a,S b) {
	if (a < b) return true;
	else return false;
}
template<>
bool cmp(char* a, char* b) {
	if (strlen(a) < strlen(b))return true;
	else return false;
}
template <typename T>
void msort(T* arr, int size)
{
	if (size > 1) {
		int mid = size / 2;
		int size_left = mid;
		int size_right = size - size_left;
		msort(&arr[0], size_left);
		msort(&arr[size_left], size_right);
		T* buf = new T[size];
		int i = 0; int j = mid;
		int ind = 0;
		while ((i < size_left) || (j < size)) {
			if (cmp(arr[i],arr[j])==true) {
				
				buf[ind] = arr[i];
				ind++;
				i++;
			}
			else {
				buf[ind] = arr[j];
				ind++;
				j++;
			}
			if (i == size_left) {
				copy(arr+j, arr+size, buf+ind);
				break;
			}
			if (j == size)
			{
				copy(arr+i, arr+size_left, buf+ind);
				break;
			}
		}
		copy(buf,
			buf+size,
			arr);
	}
}