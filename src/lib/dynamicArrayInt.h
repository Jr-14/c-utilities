#ifndef _DYNAMIC_ARRAY_INT_H_
#define _DYNAMIC_ARRAY_INT_H_

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define GROW_CAPACITY 2

typedef struct {
  void *array;
  size_t capacity;
  size_t size;
} DynamicArrayInt;


DynamicArrayInt initArrayInt(size_t initialCapacity);

void growArrayInt(DynamicArrayInt *a);

void insertIntIntoArray(DynamicArrayInt *a, int element);

int getIntFromArray(DynamicArrayInt *a, int index);

void printDynamicArrayInt(DynamicArrayInt *a);


#endif
