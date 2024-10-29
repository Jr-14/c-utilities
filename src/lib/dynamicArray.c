#include "dynamicArray.h"

void initArray(DynamicArray *a, size_t initialSize, size_t elementSize) {
  printf("creating array\n");
  a->array = calloc(initialSize, elementSize);
  a->capacity = 0;
  a->size = initialSize;
  a->elementSize = elementSize;
  printf("finished creating array\n");
}

void freeArray(DynamicArray *a) {
  free(a->array);
  a->array = NULL;
  a->capacity = 0;
  a->size = 0;
}

void grow(DynamicArray *a) {
  a->capacity *= GROW_CAPACITY;
  a->array = realloc(a->array, a->elementSize * a->capacity);
}

void insert(DynamicArray *a, void *element) {
  printf("inserting\n");
  if (a->size == a->capacity) {
    grow(a);
  }
  memcpy((char*)a->array + (a->size * a->elementSize), element, a->elementSize);
  a->size++;
}

void *getFromArray(DynamicArray *a, int index) {
  if ((unsigned long)index >= a->size) {
    printf("Index %d out of bounds", index);
    exit(1);
  }
  return (char*)a->array + index * a->elementSize;
}
