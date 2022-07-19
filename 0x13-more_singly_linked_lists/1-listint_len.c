#include "lists.h"

/**
 * listint_len - a function that returns the number of elements.
 * @h: pointer to the first node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
