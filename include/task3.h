//
// Created by Александр Славутин on 2019-03-12.
//

#pragma once
#include <cstring>
//#include <cstddef>



template <typename T, size_t size>

void map(T (&arr)[size], T (*change)(T)){
    for (size_t i(0); i < size ; ++i) {
         arr[i] = change(arr[i]);
    }
}
