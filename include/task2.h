//
// Created by Артем Аросланкин on 06/11/2018.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <cstddef>



template<class T, size_t N>
T* createArr(T(*gen)())
{
    T* nArr = new T[N];

    for (int i=0;i<N;i++)
    {
        nArr[i] = gen();
    }
    return nArr;
}

#endif //TASK1_TASK2_H
