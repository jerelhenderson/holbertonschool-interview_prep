#ifndef SANDPILES_H
#define SANDPILES_H

/* standard libraries */
#include <stdlib.h>
#include <stdio.h>

/* functions */
void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
int stable_grid(int grid[3][3]);
void merge_grid(int grid[3][3]);
static void print_grid(int grid[3][3]);

#endif 

