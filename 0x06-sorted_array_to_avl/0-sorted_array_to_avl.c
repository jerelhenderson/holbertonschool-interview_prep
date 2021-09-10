#include "binary_trees.h"

/**
 * sorted_array_to_avl - convert sorted array to balanced AVL
 *
 * @array: given array
 * @size: array size
 * Return: AVL sorted tree
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *avl_tree;
	int beg = 0;
	int end = size - 1;

	if (array == NULL || size < 1)
		return (NULL);

	avl_tree = create_avl(array, beg, end, NULL);

	return (avl_tree);
}

/**
 * create_avl - AVL creator function
 *
 * @arr: array
 * @beg: index to start from
 * @end: index to end at
 * @parent: new node parent node
 * Return: new node
 */
avl_t *create_avl(int *arr, int beg, int end, avl_t *parent)
{
	int mid;
	avl_t *root_node;

	if (beg > end)
		return (NULL);

	mid = (beg + end) / 2;
	root_node = create_node(arr[mid], parent);

	root_node->left = create_avl(arr, beg, mid - 1, root);
	root_node->right = create_avl(arr, mid + 1, end, root);

	return (root_node);
}
/**
 * create_node - creates new node
 *
 * @data: data contained inside node
 * @parent: new node parent node
 * Return: new node if success, NULL if failure
 */
avl_t *create_node(int data, avl_t *parent)
{
	avl_t *new_node = malloc(sizeof(avl_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = data;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
