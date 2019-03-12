#include "../include/task2.h"

template <typename T>
T gen(/*T key*/) {
  //cout << "wider";
  static T elem=1;
  return elem++;
  //cout<< key*2;
}

template <>
char* gen() {
  char* elem = (char*)"elem";
}

/*template <>
char* gen(/*const char* key*comm/) {
  //cout << "specific";
  char* nborn = strdup(key);
  strcat(nborn, key);
  return nborn;
  //cout << nborn;
}*/

int main()
{
  //gen(2);
  const unsigned int size = 5;
  //float floatkey=1.3;
  //int intkey=2;
  int *testarr = createArr<int, size>(gen);
  char* *testarr1 = createArr<char*, size>(gen);
  //const char* charkey="fuf";
  for (unsigned int i = 0; i < size; i++) {
    cout << testarr[i] << " ";
  }
  cout << "\n";
  for (unsigned int i = 0; i < size; i++) {
    cout << testarr1[i] << " ";
  }
  return 0;
}
