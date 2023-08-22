#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -L -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
