#include "dynamicArray.h"

void grow(DynamicArray *a) {
  a->capacity *= GROW_CAPACITY;
  a->array = realloc(a->array, a->elementSize * a->capacity);
}

void shrink(DynamicArray *a) {
}

void insert(DynamicArray *a, void *element) {
  if (a->size == a->capacity) {
    grow(a);
  }
  memcpy((char*)a->array + (a->size * a->elementSize), element, a->elementSize);
  a->size++;
}

void initArray(DynamicArray *a, size_t initialSize, size_t elementSize) {
  a->array = calloc(initialSize, elementSize);
  a->capacity = 0;
  a->size = initialSize;
  a->elementSize = elementSize;
}

