int main()
{
	int f;
	const int n = 6;
	int *val = new int[n] {5, 3, 2, 4, 1, 6};
	msort(val, n);
	for (int i = 0; i < n; i++)
	{
		cout << val[i]<< endl;
	}
	cin >> f;
    return 0;
}