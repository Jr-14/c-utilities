#ifndef _DYNAMIC_ARRAY_H_
#define _DYNAMIC_ARRAY_H_

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define GROW_CAPACITY 2

typedef struct {
  void *array;
  size_t capacity;
  size_t size;
  size_t elementSize;
} DynamicArray;

typedef struct {
  void *array;
  size_t capacity;
  size_t size;
} DynamicArrayInt;

// Free the array
void freeArray(DynamicArray *a);

// Insert an element into the Dynamic Array
void insert(DynamicArray *a, void *element);

// Initialise an Dynamic Array
void initArray(DynamicArray *a, size_t initialSize, size_t elementSize);


DynamicArrayInt initArrayInt(size_t initialCapacity);
DynamicArrayInt initArrayInt();

void growArrayInt(DynamicArrayInt *a);

void insertIntIntoArray(DynamicArrayInt *a, int element); 

void printDynamicArrayInt(DynamicArrayInt *a);


#endif
