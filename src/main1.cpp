#include "task1.h"

int main() {

	unsigned int n;
	cin >> n;
	auto * arr = (char *)malloc(sizeof(char) * n);

	for (unsigned int i = 0; i != n; i++){
		cin >> arr[i];
	}

	msort(arr, n);

	for (unsigned int i = 0; i != n; i++)
		cout << arr[i] << " ";

	return 0;

}


