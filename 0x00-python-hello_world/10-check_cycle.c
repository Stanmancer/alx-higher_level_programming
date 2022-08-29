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
	int i = 0;

	if (list == NULL)
		return (0);

	while (node != NULL)
	{
		node = node->next;
		i++;
		if (node->next < node)
			return (1);
	}

	if (node != NULL)
		return (1);

	return (0);
}
