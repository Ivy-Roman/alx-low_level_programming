#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -ccc -c *.c
ar -rc liball.a *o.c
