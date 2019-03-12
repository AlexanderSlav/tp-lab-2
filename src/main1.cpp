
#include "task1.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const size_t n = 6;
	int mas1[n] {5, 3, 2, 4, 1, 6};
	msort(mas1, n);
	for (int i = 0; i < n; i++)
	{
		cout << mas1[i] << " ";
	}
	cout << endl;
	double mas2[n]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	msort(mas2, n);
	for (int i = 0; i < n; i++){
		cout << mas2[i] << "  ";
	}
	cout << endl;
	char* mas3[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(mas3, n);
	for (int i = 0; i < n; i++){
		cout << mas3[i] << "  ";
	}
	return 0;
}

