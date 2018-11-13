#include <cstddef>
template <class T, int N>
T* createArr(T(*gen)()) {
	T* tmp = new T[N];

	for (size_t i = 0; i < N; i++)
	{
		tmp[i] = gen();
	}
	return tmp;
}

