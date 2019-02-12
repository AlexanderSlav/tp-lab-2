#include "../include/task3.h"

template <typename T>
T change(T elem){
  return ++elem;
  //cout << "ok";
}

template <>
char* change(char* elem){
  elem="aa";
  return elem;
}

int main(){
  int arr[5]={1,2,3,4,5};
  char* arr1[5] = { (char*)"7aaaaaaa", (char*)"6aaaaaa", (char*)"5aaaaa" ,(char*)"4aaaa" ,(char*)"3aaa" };
  for (int i =0; i < 5; i++) cout <<arr[i] << " ";
  cout << "\n";
  for (int i =0; i < 5; i++) cout <<arr1[i] << " ";
  cout << "\n";
  map(arr, change, 5);
  map(arr1, change, 5);
  for (int i =0; i < 5; i++) cout <<arr[i] << " ";
  cout << "\n";
  for (int i =0; i < 5; i++) cout <<arr1[i] << " ";
  return 0;
}
