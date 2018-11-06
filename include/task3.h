#include <iostream>
#pragma once
#ifndef TASK_3_H
#define TASK3__H
template<class T>
T change2(T val)
{
	return val + 1;
}

template<>
char* change2(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

template<class T, size_t n> 
void map(T*a, T(*change)(T))
{
	for (int i = 0; i < n; i++)
		a[i] = change(a[i]);
}
#endif 