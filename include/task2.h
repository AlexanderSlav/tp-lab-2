
#pragma once

template<class T>
T gen(){
	static int t = 48;
	return t++;
}

	template<>
char* gen(){
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (int i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';
	return s;
	}
template <class T, size_t n>
T * createArr(T(*gen)()) {
	T * mas = new T[n];
	for (int i = 0; i < n; i++)
		mas[i] = gen();
	return mas;
}
