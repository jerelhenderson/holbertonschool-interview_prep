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
	listint_t *new_node, *current = *head;

	if (head == NULL)
	{
		return (NULL);
	}

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

	if (current->n > number)
	{
		*head = new_node;
		new_node->next = current;
		return (new_node);
	}

	while (current->next != NULL)
	{
		if (current->next->n > number)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
