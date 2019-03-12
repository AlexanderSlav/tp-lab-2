#include <iostream>
template <typename T, size_t n>
void map(T(&a)[n], T(*change)(T)) {
	for (int i = 0; i < n; i++) a[i] = change(a[i]);
}