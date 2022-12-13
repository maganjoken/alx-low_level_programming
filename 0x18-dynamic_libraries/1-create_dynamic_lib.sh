#!/bin/bash
gcc -wall -wextra -werror -pedanttic -c -fPIC *.c
gcc -shared -o liball.so *.o

