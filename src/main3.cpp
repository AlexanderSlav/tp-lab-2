//
// Created by Александр Славутин on 2019-03-12.
//

#include "task3.h"
#include <iostream>

template <typename T>
T change(T val){
    return val + 1;
}


int main(){
    const size_t size = 5;
    int array[size] = {1,2,3,4,5};
    map(array,change);

    for(size_t i(0); i < size ; ++i){
        std::cout << array[i];
    }
    return 0;
}