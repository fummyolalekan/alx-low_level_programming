#include "lists.h"

/**
 * free_listint - Frees a list of nodes
 * @head: Pointer to the first element of the list
 */
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
