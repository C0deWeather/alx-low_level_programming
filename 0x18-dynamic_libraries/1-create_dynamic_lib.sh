#!/bin/bash

#This script creates a shared library from C source files
#present in the current working directory.
gcc -shared -fPIC -o liball.so *.c
