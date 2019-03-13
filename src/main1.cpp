//
// Created by Александр Славутин on 2019-03-12.
//
#include "task1.h"

int main(){
    const size_t size = 8 ;
    int arr[size] = {41,221,607,156,89,56,78,98};
    msort(arr, size);
    std::cout<< "|| ";
    for(auto i (0); i < size ; i++ ){
       std::cout << arr[i] << " ";
    }
    return 0;
}
