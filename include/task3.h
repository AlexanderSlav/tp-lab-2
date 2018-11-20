
#pragma once

template<class T>
T change(T val)
{
	return val + 1;
}

template<>
char* change(char* val)
{
	size_t n = strlen(val);
	for (int i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

template<class T,int n>
void map(T (&mas)[n], T(*change)(T)){
	for (int i = 0; i < n;i++)
		mas[i] = change(mas[i]);
}
