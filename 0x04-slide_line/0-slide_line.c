#include "slide_line.h"


/**
 * merge_left - merge identical integers leftward
 *
 * @arr: pointer to int array
 * @size: number of elements
 */
void merge_left(int *arr, int size)
{
	int i;

	for (i = 0; i < size - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			arr[i + 1] = arr[i + 1] * 2;
			arr[i] = 0;
			++i;
		}
	}
}

/**
 * merge_right - combines identical ints moving rightward
 *
 * @arr: pointer to int array
 * @size: number of elements
 */
void merge_right(int *arr, int size)
{
	int i;

	for (i = size - 1; i + 1 > 1; i--)
	{
		if (arr[i] == arr[i - 1])
		{
			arr[i - 1] = arr[i - 1] * 2;
			arr[i] = 0;
			--i;
		}
	}
}

/**
 * go_left - moves all ints leftward
 *
 * @arr: pointer to int array
 * @size: number of elements
 */
void go_left(int *arr, int size)
{
	int i, temp;

	for (i = 1; i < size; i++)
	{
		if (arr[i] != 0)
		{
			temp = i;
			while (arr[i - 1] == 0 && i > 0)
			{
				arr[i - 1] = arr[i];
				arr[i] = 0;
				--i;
			}
			i = temp;
		}
	}
}

/**
 * go_right - moves all ints rightward
 *
 * @arr: pointer to int array
 * @size: number of elements
 */
void go_right(int *arr, int size)
{
	int i, temp;

	for (i = size - 2; i + 1 > 0; i--)
	{
		if (arr[i] != 0)
		{
			temp = i;
			while (arr[i + 1] == 0 && i < size - 1)
			{
				arr[i + 1] = arr[i];
				arr[i] = 0;
				++i;
			}
			i = temp;
		}
	}
}
/**
 * slide_line - slide numbers left/right, or merge if same
 *
 * @line: pointer to array of integers
 * @size: number of elements
 * @direction: left or right
 * Return: 1 if success, 0 if failure
 */
int slide_line(int *line, size_t size, int direction)
{
	if (line == NULL)
		return (0);
	if (direction == SLIDE_LEFT)
	{
		go_left(line, size);
		merge_left(line, size);
		go_left(line, size);
	}
	if (direction == SLIDE_RIGHT)
	{
		go_right(line, size);
		merge_right(line, size);
		go_right(line, size);
	}
	return (1);
}
