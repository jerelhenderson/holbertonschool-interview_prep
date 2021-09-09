#ifndef SLIDE_LINE_H
#define SLIDE_LINE_H

/* standard libraries */
#include <stdlib.h>
#include <stdio.h>

/* macros */
#define SLIDE_LEFT 1
#define SLIDE_RIGHT 0

/* functions */
int slide_line(int *line, size_t size, int direction);
void merge_left(int *line, int size);
void merge_right(int *line, int size);
void go_left(int *line, int size);
void go_right(int *line, int size);

#endif
