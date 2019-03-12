#include "task2.h"

int gen (){
    static int t;
    return ++t;
}

int main(){

    auto * arr = createArr<int, 20>(gen);

    for (int i = 0; i < 20; i++)
        cout << arr[i] << " ";

}