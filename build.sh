#! /bin/bash

rm -rf ./build;
mkdir -p ./build/lib;

# Create object file
clang -o ./build/lib/dynamicArray.o -c ./src/lib/dynamicArray.c;

clang -o ./build/utilities -Wall -Wextra -std=c2x -pedantic ./src/main.c ./build/lib/dynamicArray.o
