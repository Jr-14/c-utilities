#include <stdio.h>
#include "lib/dynamicArray.h"
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

  DynamicArray myArr;
  initArray(&myArr, 10, sizeof(int));
  insert(&myArr, &(int){5});
  insert(&myArr, &(int){0});

  int retrievedInt = *(int *)retrieve(&myArr, 1);
  printf("My integer is %d\n", retrievedInt);
  retrievedInt = *(int *)retrieve(&myArr, 1);
  printf("My integer is still %d\n", retrievedInt);
  retrievedInt = *(int *)retrieve(&myArr, 0);
  printf("My new integer is %d\n", retrievedInt);


  insert(&myArr, &(int){100});
  insert(&myArr, &(int){50});
  insert(&myArr, &(int){1000});
  insert(&myArr, &(int){40});
  insert(&myArr, &(int){9});
  insert(&myArr, &(int){63});
  insert(&myArr, &(int){42});
  insert(&myArr, &(int){99});
  insert(&myArr, &(int){101});

  printf("My array size is %d\n", (int)myArr.size);
  printf("My array capacity is %d\n", (int)myArr.capacity);
}
