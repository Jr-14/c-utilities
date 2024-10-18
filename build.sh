#! /bin/bash

rm -rf ./bin;
mkdir -p ./bin/lib;

# Create object file
# clang -o ./bin/lib/dynamicArray.o -c ./src/lib/dynamicArray.c;
clang -o ./bin/lib/dynamicArrayInt.o -c ./src/lib/dynamicArrayInt.c;

clang -o ./bin/utilities -Wall -Wextra -std=c2x -pedantic ./src/main.c ./bin/lib/dynamicArrayInt.o
