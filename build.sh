#! /bin/bash

rm -rf ./build;
mkdir ./build;
clang -o ./build/utilies -Wall -Wextra -std=c2x -pedantic ./src/main.c
