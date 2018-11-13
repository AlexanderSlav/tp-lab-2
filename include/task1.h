#ifndef TASK1h
#define TASK1h

#include <iostream>
#include <cstring>

	template <typename T>
	bool comparing(T v_1, T v_2) { return (v_1 < v_2); }
	
	//Для char:
	bool comparing(char* v_1, char* v_2) { return (strlen(v_1) < strlen(v_2)); }

	/*=====[Функция для слияния массива]=====*/
	template <typename T>
	void merge_arr(T* arr, int first, int last)
	{
		int start = first;//Начало левой части
		int middle = (first + last) / 2;//Cредний элемент
		int end = middle + 1; //Начало правой части
		T* temp_arr = new T[last + 1];//Временный массив

		for(int i = first; i <= last; i++)
		{
			if((start <= middle) && ( (end > last) || (comparing(arr[start], arr[end]) ) ))
			{
				temp_arr[i] = arr[start];
				start++;
			}
			else
			{
				temp_arr[i] = arr[end];
				end++;
			}
		}
		for (int i = first; i <= last; i++)
		{
			arr[i] = temp_arr[i];//Перезаписываем наш массив новыми значениями
		}
		delete[]temp_arr;
	}
	/*=====[Сортировка + слияние массива (рекурсивно)]=====*/
	template<typename T>
	void merge_sort_arr(T* arr, int first, int last)
	{
		if (first < last)
		{
			int altogether = first + last;
			int middle = (altogether / 2);
			merge_sort_arr(arr, first, middle);//Сортировка левой части
			merge_sort_arr(arr, (middle + 1), last);//Сортировка правой части
			merge_arr(arr, first, last);//Слияние двух частей
		}
	}
	/*=====[Функция сортировки]=====*/
	template<typename T>
	void msort(T* arr, size_t size)
	{
		int first = 0;
		int last = size - 1;
		merge_sort_arr(arr, first, last);
	}

#endif 