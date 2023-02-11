#! /bin/bash

rm -rf build
mkdir build
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build --parallel
