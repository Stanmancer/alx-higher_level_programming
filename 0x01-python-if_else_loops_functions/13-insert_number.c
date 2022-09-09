#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: double pointer to start of list
 * @number: integer to be added in the list
 *
 * Return: address of the new node or NULL if it failes
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head;
	listint_t *new = NULL;

	/* memory alloc */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;

	/* sorting */
	while (node != NULL)
	{
		if ((node->next)->n > number)
		{
			new->next = node->next;
			node->next = new;
			break;
		}
		node = node->next;
	}

	if (node == NULL)
		return (NULL);

	return (new);
}
