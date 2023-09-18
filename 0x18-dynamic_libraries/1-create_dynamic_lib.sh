#!/bin/bash
gcc *.c -Wall -Wextra -werror -pedantic -c -fPIC
gcc *.o -shared -o liball.so 
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
