#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o libal.so
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
