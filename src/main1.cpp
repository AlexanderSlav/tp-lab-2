#include "task1.h"

int main() {
	char* array1[5] = { (char*)"7aaaaaaa", (char*)"6aaaaaa", (char*)"5aaaaa" ,(char*)"4aaaa" ,(char*)"3aaa" };
	int array2[10] = { 9,8,7,6,5,4,3,2,1,0 };
	float array3[6] = { 5.5, 4.4, 3.3, 2.2, 1.1, 0.0 };
	unsigned int size1 = sizeof(array1) / sizeof(array1[0]);
	unsigned int size2 = sizeof(array2) / sizeof(array2[0]);
	unsigned int size3 = sizeof(array3) / sizeof(array3[0]);
	merge_sort(array1, size1);
	merge_sort(array2, size2);
	merge_sort(array3, size3);
	for (unsigned int i = 0; i < size1; i++) cout << array1[i] << " ";
	cout << "\n";
	for (int i : array2) cout << array2[i] << " ";
	cout << "\n";
	for (int i : array3) cout << array3[i] << " ";
	return 0;
}
