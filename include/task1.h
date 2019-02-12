#include <iostream>
#include <cstring>
using namespace std;

template <typename N>
void merge(N arr[], unsigned int left_size, unsigned int right_size) {
	N* temp = new N[right_size + left_size];
	unsigned int left_iter = 0, temp_iter = 0, right_iter = left_size;
	while (left_iter < left_size || right_iter < right_size + left_size) {
		if (arr[left_iter] < arr[right_iter]) {
			temp[temp_iter++] = arr[left_iter++];
		}
		else {
			temp[temp_iter++] = arr[right_iter++];
		}
		if (left_iter == left_size) {
			for (unsigned int i = right_iter; i < right_size + left_size; i++) {
				temp[temp_iter++] = arr[i];
			}
			break;
		}
		if (right_iter == left_size + right_size) {
			for (unsigned int i = left_iter; i < left_size; i++) {
				temp[temp_iter++] = arr[i];
			}
			break;
		}
	}
	for (unsigned int i = 0; i < right_size + left_size; i++) {
		arr[i] = temp[i];
	}
	delete[] temp;
}

template <>
void merge(char* arr[], unsigned int left_size, unsigned int right_size) {
	char** temp = new char*[right_size + left_size];
	unsigned int left_iter = 0, temp_iter = 0, right_iter = left_size;
	while (left_iter < left_size || right_iter < right_size + left_size) {
		if (strlen(arr[left_iter]) < strlen(arr[right_iter])) {
			temp[temp_iter++] = arr[left_iter++];
		}
		else {
			temp[temp_iter++] = arr[right_iter++];
		}
		if (left_iter == left_size) {
			for (unsigned int i = right_iter; i < right_size + left_size; i++) {
				temp[temp_iter++] = arr[i];
			}
			break;
		}
		if (right_iter == left_size + right_size) {
			for (unsigned int i = left_iter; i < left_size; i++) {
				temp[temp_iter++] = arr[i];
			}
			break;
		}
	}
	for (unsigned int i = 0; i < right_size + left_size; i++) {
		arr[i] = temp[i];
	}
	delete[] temp;
}
/*template<>
void merge(char* arr[], unsigned int left_size, unsigned int right_size) {
	cout << "coverup n2";
}*/

template <typename T>
void merge_sort(T arr[], unsigned int size) {
	if (size <= 1) return;
	unsigned int left_size = size / 2;
	unsigned int right_size = size - left_size;
	merge_sort(&arr[0], left_size);
	merge_sort(&arr[left_size], right_size);
	merge(&arr[0], left_size, right_size);
}

/*template<>
void merge_sort(char* arr[], unsigned int size) {
	if (size <= 1) return;
	unsigned int left_size = size / 2;
	unsigned int right_size = size - left_size;
	merge_sort(&arr[0], left_size);
	merge_sort(&arr[left_size], right_size);
	merge(&arr[0], left_size, right_size);
}*/

/*template<>
void merge_sort(char* arr[], unsigned int size) {
	cout << arr[2];
}*/
