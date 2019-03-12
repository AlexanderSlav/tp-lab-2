#ifndef map_h
#define map_h

template<typename T, int n>
void map(T Arr[], T (*change)(T)) {
	for (int i = 0; i < n; i++) {
		Arr[i] = change(Arr[i]);
	}
}
#endif
