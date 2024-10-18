#include <stdio.h>
#include "lib/dynamicArray.h"

void printArray(DynamicArray *a) {
  for (size_t i = 0; i < a->size; i++) {
    printf("%lu ", *(int*)(char*)a->array + i * a->elementSize);
  }
  printf("\n");
}

int main() {
  printf("hello, world!!\n");

  DynamicArrayInt a = initArrayInt(1);
  insertIntIntoArray(&a, 4);
  insertIntIntoArray(&a, 3);
  insertIntIntoArray(&a, 2);
  insertIntIntoArray(&a, 1);
  insertIntIntoArray(&a, 0);
  printDynamicArrayInt(&a);
  // DynamicArray a;
  // initArray(&a, 4, sizeof(int));
  // printf("about to insert stuff\n");
  // insert(&a, (void*)5);
  // insert(&a, (void*)6);
  // printArray(&a);

}
