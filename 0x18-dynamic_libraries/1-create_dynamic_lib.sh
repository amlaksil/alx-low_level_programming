#!/bin/bash
gcc -fPIC -c -Wall -pedantic -Werror -Wextra *.c
gcc -shared *.o -o liball.so
export LD_LIBRARY_PATH=.:$LIBRARY_PATH
