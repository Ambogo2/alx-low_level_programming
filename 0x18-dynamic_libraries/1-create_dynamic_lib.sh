#!/bin/bash
gcc -c -fPIC -Wall -pedantic -Werror -Wextra *.c
gcc -shared -o liball.so *.o
rm -f *.o
