#pragma once

#include "../include/external_funcs.h"
#include "../include/task1.h"

using namespace std;

int main()
{
	const size_t n = 10;
	cout << "Integer:" << endl;
	int* int_values = new int[n]{ 8, 9, 13, 25, 48, 184, 1, 382, 38, 21 };
	msort(int_values, n);
	disp(int_values, n);

	cout << endl << "Double:" << endl;
	double dbl_values[n]{ 7.3, 49.2, 133.9, -1.5, 50.3, 98, -0.5, -13.4, 9.8, 1.5 };
	msort(dbl_values, n);
	disp(dbl_values, n);

	cout << endl << "Char:" << endl;
	char* ch_values[n]{ (char*)"iowdi", (char*)"re", (char*)"w", (char*)"fu", (char*)"eptir", (char*)"mar", (char*)"z", (char*)"gorjiogj3riojio", (char*)"wer", (char*)"yeh"};
	msort(ch_values, n);
	disp(ch_values, n);

	delete[] int_values;//Освобождаем память
	return 0;
}