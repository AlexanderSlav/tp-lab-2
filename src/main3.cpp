#include "task3.h"

int change (int i){
    return i + 1;
}

int main(){

    const size_t n = 5;
    int arr[n]{1, 2, 3, 4, 5};
    map<int, n>(arr, change);

    int expected[n]{2, 3, 4, 5, 6};

    for(size_t i = 0; i < n; i++)
        cout << (expected[i] == arr[i]) << " ";

    return 0;

}