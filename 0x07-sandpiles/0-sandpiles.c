#include "sandpiles.h"


/**
 * sandpiles_sum: create a stable sandpile grid
 * 
 * @grid1: first given grid
 * @grid2: second given grid
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			grid1[i][j] = grid1[i][j] + grid2[i][j];
	while (grid1)
	{
		if (stable_grid(grid1) == 1)
			return;
		else
			merge_grid(grid1);
			print_grid(grid1);	
	}
}

/**
 * stable_grid: check that no grid cell contains more than 3 grains
 *
 * @grid: grid to check
 * Return: 1 if stable, 0 if not
 */
int stable_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (grid[i][j] > 3)
				return (0);
	return (1);
}

/**
 * merge_grid: function stabilizes first given grid
 *
 * @grid: given grid
 */
void merge_grid(int grid[3][3])
{
	int i, j;

	printf("=\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid[i][j] > 3)
			{
				grid[i][j] -= 4;
				if (i != 0)
					grid[i - 1][j]++;
				if (i != 2)
					grid[i + 1][j]++;
				if (j != 0)
					grid[i][j - 1]++;
				if (j != 2)
					grid[i][j + 1]++;
			}
		}
	}
}

/**
 * print_grid: function prints grid
 *
 * @grid: given grid
 */
static void print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}
