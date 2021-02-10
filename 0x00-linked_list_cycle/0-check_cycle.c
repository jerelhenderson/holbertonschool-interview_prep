#include "lists.h"


/**
 * check_cycle - check for loop in singly linked list
 *
 * @list: linked list to traverse
 * Return: 0 if no cycle, 1 if cycle exists
 */
int check_cycle(listint_t *list)
{
	listint_t *start = list;
	listint_t *shift = list;

	if (list == NULL)
		return (0);

	while (shift != NULL && start->next != NULL)
	{
		start = start->next;
		shift = shift->next->next;

		if (start == shift)
			return (1);
	}
	return (0);
}
