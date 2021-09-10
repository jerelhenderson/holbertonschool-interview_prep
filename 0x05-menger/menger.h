#ifndef MENGER_H
#define MENGER_H

/* standard libraries */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* functions */
void menger(int level);
int fill_or_not(int row, int col);
void print_arr(int *arr, int size);

#endif
