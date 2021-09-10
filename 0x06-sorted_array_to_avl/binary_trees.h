#ifndef ARRAY_TO_AVL_H
#define ARRAY_TO_AVL_H

/* standard libraries */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

/* type definitions */
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s avl_t;

/* functions */
avl_t *sorted_array_to_avl(int *array, size_t size);
avl_t *create_node(int data, avl_t *parent);
avl_t *create_avl(int *arr, int beg, int end, avl_t *parent);
void print_array(const int *array, size_t size);
void binary_tree_print(const binary_tree_t *tree);

#endif
