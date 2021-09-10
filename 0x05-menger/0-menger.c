#include "menger.h"


/**
 * menger - draw 2D Menger sponge
 *
 * @level: number of sponge levels
 */
void menger(int level)
{
	int i, j, size;
	int *arr = NULL;

	if (level < 0)
		return;
	if (level == 0)
	{
		printf("#\n");
		return;
	}

	size = pow(3, level);

	arr = malloc((size * size) * sizeof(int));
	if (arr == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			arr[j + i * size] = fill_or_not(i, j);
	}

	print_arr(arr, size);
	free(arr);
}

/**
 * fill_or_not - determine whether grid should contain #
 *
 * @row: grid row
 * @col: grid column
 * Return: 1 if fill needed, 0 if not
 */
int fill_or_not(int row, int col)
{
	while (row > 0 && col > 0)
	{
		if (row % 3 == 1 && col % 3 == 1)
			return (0);
		row = row / 3;
		col = col / 3;
	}
	return (1);
}

/**
 * print_arr - print the array
 *
 * @arr: pointer to the array
 * @size: size of the array
 * Return: None
 */
void print_arr(int *arr, int size)
{
	int row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (arr[col + row * size] != 0)
				putchar('#');
			else
				putchar(' ');
		}
		putchar('\n');
	}
}
