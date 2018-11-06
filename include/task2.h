#ifndef CreateArr_h
#define CreateArr_h

template<typename T, int n>
T * createArr(T (*gen)()) {
	auto * Arr = new T[n];
	for (int i = 0; i < n; i++) {
		Arr[i] = gen();
	}
	return Arr;
}
#endif
