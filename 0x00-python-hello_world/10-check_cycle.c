#include "lists.h"

/**
 * check_cyle - checks if a sinlgy linked list has a cycle in it
 * @list: pointer to first node of the list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *tortoise = list;
	listint_t *hare = list;

	if (list == NULL)
		return (0);

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (hare == tortoise)
			return (1);
	}

	return (0);
}
