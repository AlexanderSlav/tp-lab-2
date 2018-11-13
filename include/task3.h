#pragma once
#include <iostream>
using namespace std;


template<class T, int n>
T * map(T mass[n], T(*change)(T)) {
	for (int i = 0; i < n; i++) {
		mass[i] = change(mass[i]);
	}
	return mass;
}