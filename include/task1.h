#ifndef msort_h
#define msort_h

#include <cstring>

template <typename T>
bool cmp(T a, T b) {
	if (a < b) return true;
	else return false;
}
template <>
bool cmp<char*>(char* a, char* b) {
	if (strlen(a) < strlen(b)) return true;
	else return false;
}
template <typename F>
void msort(F *array, int size) {
	if (size > 1) {
		int midle = size / 2, i, j, k = 0;
		F *leftpart = new F[midle];
		for (i = 0; i < midle; i++) {
			leftpart[i] = array[i];
		}
		F *rightpart = new F[size - midle];
		for (j = 0; j < (size - midle); j++) {
			rightpart[j] = array[i++];
		}
		i = j = 0;
		msort(leftpart, midle);
		msort(rightpart, size - midle);
		while (i < midle && j < (size - midle)) {
			if (cmp(leftpart[i], rightpart[j])) {
				array[k] = leftpart[i];
				i++;
			}
			else {
				array[k] = rightpart[j];
				j++;
			}
			k++;
		}
		while (i < midle) {
			array[k] = leftpart[i];
			i++;
			k++;
		}
		while (j < size - midle) {
			array[k] = rightpart[j];
			j++;
			k++;
		}
		delete[] leftpart;
		delete[] rightpart;
	}
	else return;
}
template <>
void msort<char>(char* array, int size) {
	if (size > 1) {
		int midle = size / 2, i, j, k = 0;
		char *leftpart = new char[midle];
		for (i = 0; i < midle; i++) {
			leftpart[i] = array[i];
		}
		char *rightpart = new char[size - midle];
		for (j = 0; j < (size - midle); j++) {
			rightpart[j] = array[i++];
		}
		i = j = 0;
		msort(leftpart, midle);
		msort(rightpart, size - midle);
		while (i < midle && j < (size - midle)) {
			if (cmp(leftpart[i], rightpart[j])) {
				array[k] = leftpart[i];
				i++;
			}
			else {
				array[k] = rightpart[j];
				j++;
			}
			k++;
		}
		while (i < midle) {
			array[k] = leftpart[i];
			i++;
			k++;
		}
		while (j < size - midle) {
			array[k] = rightpart[j];
			j++;
			k++;
		}
		delete[] leftpart;
		delete[] rightpart;
	}
	else return;
}

#endif