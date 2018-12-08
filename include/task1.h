#include <iostream>
#include <cstring>
#include <cstddef>

template<class T>
bool cmp(T a, T b) {
	return a < b;
}

template<>
bool cmp(char * a, char* b) {
	return strlen(a) < strlen(b);
}

template<class T>
void merge(T * arr, size_t size) {
	if (size > 1) {
		size_t const left_size = size / 2;
		size_t const right_size = size - left_size;
		
		merge(arr, left_size);
		merge(arr + left_size, right_size);

		T * buf = new T[size];

		size_t xl = 0;			//индексация во время просмотра 
		size_t xr = left_size;	//исходного массива
		size_t curr = 0;		//текущий индекс в массиве

		while ((xl < left_size) || (xr < size)) {	//пока индекс не выходит за левую часть или за правую
			if (cmp(arr[xl], arr[xr])) {
				buf[curr++] = arr[xl++];
			}
			else {
				buf[curr++] = arr[xr++];
			}
			if (xl == left_size) {
				while (curr < size)
					buf[curr++] = arr[xr++];	//заполняем оставшееся место в буфере
				break;
			}
			if (xr == size) {
				while (curr < size)
					buf[curr++] = arr[xl++];
				break;
			}
		}
		for (size_t i = 0; i < size; i++)
			arr[i] = buf[i];
		delete[] buf;
	}
}