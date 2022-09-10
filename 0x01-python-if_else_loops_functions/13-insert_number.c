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
	listint_t *temp = *head;
	listint_t *new = NULL;

	/* memory alloc */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;

	/* empty list */
	if (node == NULL)
	{
		(*head) = new;
		new->next = NULL;
		return (new);
	}
	else
	{
		/* insert at beginning */
		if ((*head)->n > number)
		{
			new->next = (*head);
			(*head) = new;
			return (new);
		}
		while (node != NULL)
		{
			node = node->next;
			if ((node == NULL) || (node->n > number))
			{
				new->next = node;
				temp->next = new;
				break;
			}
			temp = node;
		}
		return (new);
	}
}
