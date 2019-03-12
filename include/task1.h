#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

template<typename P>

bool compare(P a, P b){
    return a < b;
}

bool compare(char * a, char * b){
    return strlen(a) < strlen(b);
}

template<typename T>

void msort(T * array, unsigned int size){

    if (size <= 1)
        return;

    msort(array, size / 2);
    msort(&array[size / 2], size - size / 2);

    vector<T> tmp_array;
    unsigned int l = 0, r = size / 2;

    while (l < size / 2 || r < size){

        if (l < size / 2 && r < size){
            if (compare(array[l], array[r])){
                tmp_array.push_back(array[l]);
                l++;
            }
            else{
                tmp_array.push_back(array[r]);
                r++;
            }
        }
        else if (l < size / 2){
            tmp_array.push_back(array[l]);
            l++;
        }
        else{
            tmp_array.push_back(array[r]);
            r++;
        }

    }

    copy(tmp_array.begin(), tmp_array.end(), array);

}
