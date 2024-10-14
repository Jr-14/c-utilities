#include <stdio.h>
#include "lib/dynamicArray.h"

int main() {
  printf("hello, world!!\n");
  
  DynamicArray a;
  initArray(&a, 3, sizeof(int));
  insert(&a, (void*)5);
}
