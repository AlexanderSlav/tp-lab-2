#include "task1.h"
#include <iostream>
using namespace std;
int main()
{
	const size_t n = 6;
	int *val1 = new int[n] {5, 3, 2, 4, 1, 6};
	
	char* val2[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	
		msort(val1,n);
		msort(val2,n);

		cout << "Arrays after sorting:\n" << endl;

		for (int i = 0; i < n; i++)     
		{
			cout << val1[i] << " ";
		}
		cout << "\n";
		for (int i = 0; i < n; i++)     
		{
			cout << val2[i] << " ";
		}
		cout << "\n"; 
		system("pause");
		return 0;	
}