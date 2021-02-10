#include "lists.h"


/**
 * insert_node - insert number into sorted singly linked list
 *
 * @head: pointer-to-pointer of first node in list
 * @number: data to insert
 * Return: new node address, or NULL
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node;
	listint_t *current;

	current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->n = number;
	new_node->next = NULL;

	current = current->next;

	while (current->next != NULL)
	{
		if (new_node->n > current->n && new_node->n < current->next->n)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
	}
	return (0);
}
