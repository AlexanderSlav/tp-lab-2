#include "task3.h"

template <typename T>
T change(T elem){
  return ++elem;
  //cout << "ok";
}

int main(){
  int arr[5]={1,2,3,4,5};
  for (int i =0; i < 5; i++) cout <<arr[i] << " ";
  cout << "\n";
  map(arr, change, 5);
  for (int i =0; i < 5; i++) cout <<arr[i] << " ";
  return 0;
}
