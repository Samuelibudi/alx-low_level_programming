#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -Wall -o liball.so
