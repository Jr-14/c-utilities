#include "dynamicArray.h"

void grow(DynamicArray *a) {
  a->capacity *= GROW_CAPACITY;
  a->array = realloc(a->array, a->elementSize * a->capacity);
}

void shrink(DynamicArray *a) {
}

void freeArray(DynamicArray *a) {
  free(a->array);
  a->array = NULL;
  a->capacity = 0;
  a->size = 0;
}

void insert(DynamicArray *a, void *element) {
  printf("inserting\n");
  if (a->size == a->capacity) {
    grow(a);
  }
  memcpy((char*)a->array + (a->size * a->elementSize), element, a->elementSize);
  a->size++;
}

void initArray(DynamicArray *a, size_t initialSize, size_t elementSize) {
  printf("creating array\n");
  a->array = calloc(initialSize, elementSize);
  a->capacity = 0;
  a->size = initialSize;
  a->elementSize = elementSize;
  printf("finished creating array\n");
}

DynamicArrayInt initArrayInt(size_t initialCapacity) {
  DynamicArrayInt a;
  printf("Creating array\n");
  a.array = calloc(initialCapacity, sizeof(int));
  a.capacity = initialCapacity;
  a.size = 0;
  printf("finished creating array");
  return a;
}

void growArrayInt(DynamicArrayInt *a) {
  a->capacity *= GROW_CAPACITY;
  a->array = realloc(a->array, sizeof(int) * a->capacity);
}

void insertIntIntoArray(DynamicArrayInt *a, int element) {
  if (a->size == a->capacity) {
    growArrayInt(a);
  }

  memcpy((char*)a->array + (a->size * sizeof(int)), &element, sizeof(int));
  a->size++;

  printf("Array size is %d, and array capacity is %d\n", (int)a->size, (int)a->capacity);
}

void printDynamicArrayInt(DynamicArrayInt *a) {
  for (size_t i = 0; i < a->size; i++) {
      int *integer = (int*)((char*)a->array + i * sizeof(int));
      printf("integer is %d\n", *integer);
  }
}
