#!/bin/bash
gcc -wall -wextra -werror -pedanttic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
<<<<<<< HEAD
 
=======

>>>>>>> 559911cd57e5282e9578c1e05b9c53880bd2d772
