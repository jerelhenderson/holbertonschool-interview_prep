#include "lists.h"

int len(listint_t *head);

/**
 * is_palindrome - check if linked list is palindrome
 *
 * @head: double pointer to head of list
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(listint_t **head)
{
	int i, j, count;
	listint_t *end = *head, *beg = *head;

	count = len(*head);

	if (count > 0)
	{
		for (i = 0; i < count / 2; i++)
		{
			for (j = 0; j < count - 1; j++)
				end = end->next;
			if (beg->n != end->n)
				return (0);
			count--;
			end = *head;
			beg = beg->next;
		}
		return (1);
	}
	return (0);
}


/**
 * len - find the size of the linked list
 *
 * @head: pointer head of list
 * Return: list length, 0 if empoty
 */
int len(listint_t *head)
{
	listint_t *current = head;
	int count = 0;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
