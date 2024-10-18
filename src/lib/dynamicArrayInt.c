#include "dynamicArrayInt.h"

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

int getIntFromArray(DynamicArrayInt *a, int index) {
    if (index >= a->size - 1) {
        printf("Index %d is out of bounds. Max index available is %d", index, (int)(a->size - 1));
        return NULL;
    }
    return *(int*)((char*)a->array + index * sizeof(int));
}

void printDynamicArrayInt(DynamicArrayInt *a) {
    for (size_t i = 0; i < a->size; i++) {
        int *integer = (int*)((char*)a->array + i * sizeof(int));
        printf("integer is %d\n", *integer);
    }
}