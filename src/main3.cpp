#include "../include/task3.h"

template <typename T>
T change(T elem){
  return ++elem;
  //cout << "ok";
}

template <>
char* change(char* elem){
  elem=(char*)"aa";
  return elem;
}

int main(){
  const unsigned int size = 5;
  int arr[5]={1,2,3,4,5};
  char* arr1[5] = { (char*)"7aaaaaaa", (char*)"6aaaaaa", (char*)"5aaaaa" ,(char*)"4aaaa" ,(char*)"3aaa" };
  for (int i =0; i < 5; i++) cout <<arr[i] << " ";
  cout << "\n";
  for (int i =0; i < 5; i++) cout <<arr1[i] << " ";
  cout << "\n";
  map<int, size>(arr, change);
  map<char*, size>(arr1, change);
  for (int i =0; i < 5; i++) cout <<arr[i] << " ";
  cout << "\n";
  for (int i =0; i < 5; i++) cout <<arr1[i] << " ";
  return 0;
}
