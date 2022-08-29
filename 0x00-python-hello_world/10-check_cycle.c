#include "lists.h"

/**
 * check_cyle - checks if a sinlgy linked list has a cycle in it
 * @list: pointer to first node of the list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *node = list;

	if (list == NULL)
		return (0);

	while (node != NULL)
	{
		node = node->next;
		if (node == list)
			return (1);
	}

	if (node == NULL)
		return (0);
	else if (node->next != NULL)
		return (1);

	return (0);
}
