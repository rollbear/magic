#!/bin/bash

set -x

g++ -c -fpic holder.cpp
g++ -shared -o libholder.so holder.o
g++ -L. thief.cpp -lholder -o test
LD_LIBRARY_PATH="$(pwd)" ./test
