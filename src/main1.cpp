int main()
{
	int N1 = 6;
	int N2 = 6;
	int N3 = 6;
	setlocale(LC_ALL, "rus");
	int a[6] = { 5,3,2,4,1,6 };
	double b[6]={ 4.0, 2.0, 2.4, 2.5, 2.1, -1 };
	char* c[6]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	cout << "До сортировки:\n";
	for (int i = 0; i < N1; i++)cout << a[i] << ' ';
	cout << "\n";
	msort(&a[0], N1); 
	cout << "После сортировки:\n";
	for (int i = 0; i < N1; i++)cout << a[i] << ' ';
	cout << '\n';
	cout << "До сортировки:\n";
	for (int i = 0; i < N2; i++)cout << b[i] << ' ';
	cout << "\n";
	msort(&b[0], N2);
	cout << "После сортировки:\n";
	for (int i = 0; i < N2; i++)cout << b[i] << ' ';
	cout << '\n';
	cout << "До сортировки:\n";
	for (int i = 0; i < N3; i++)cout << c[i] << ' ';
	cout << "\n";
	msort<char*>(&c[0], N3);
	cout << "После сортировки:\n";
	for (int i = 0; i < N3; i++)cout << c[i] << ' ';
	system("pause");
	return 0;
}