#pragma once
#include <cstring>

template<class T,size_t n>
void map(T (&mas)[n], T(*change)(T)){
	for (int i = 0; i < n;i++)
		mas[i] = change(mas[i]);
}
