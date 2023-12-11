#!/bin/bash
echo 'void srand(unsigned int seed) { }' > /tmp/rand.c
echo 'int rand(void) { return 6; }' >> /tmp/rand.c
gcc -shared -o /tmp/rand.so /tmp/rand.c
export LD_PRELOAD=/tmp/rand.so

