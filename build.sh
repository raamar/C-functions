#!/bin/bash
build() {
  rm -rf ./build/*.o
  mkdir -p build
  bPath=./build/$1.exe

  for f in src/*.c ./$1.c; do
    gcc -c $f -o build/"${f##*/}".o
  done

  gcc -o $bPath build/*.o -lm
  $bPath
}

build $1