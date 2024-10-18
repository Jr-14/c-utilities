#include <stdio.h>
#include "lib/dynamicArrayInt.h"

int main() {
  printf("hello, world!!\n");

  DynamicArrayInt a = initArrayInt(1);
  insertIntIntoArray(&a, 4);
  insertIntIntoArray(&a, 3);
  insertIntIntoArray(&a, 2);
  insertIntIntoArray(&a, 1);
  insertIntIntoArray(&a, 0);
  printDynamicArrayInt(&a);

  int ind = 0;
  int wow = getIntFromArray(&a, ind);
  printf("Value at index %d is %d", ind, wow);
}
