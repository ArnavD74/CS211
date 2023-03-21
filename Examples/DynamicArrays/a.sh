#!/bin/bash
chmod +x ./test
chmod +x ./test.c
gcc test.c -o test
echo "Compiled!"
./test