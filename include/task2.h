#pragma once

template<typename T,int N>

T* createArr(T (*gen)())
{
	T* pArr = new T[N];

	for (auto i=0;i<N;i++)
	{
		pArr[i] = gen();
		
	}
	return pArr;
}

