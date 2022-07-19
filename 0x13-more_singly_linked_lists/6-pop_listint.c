#include "lists.h"

/**
 * pop_listint - deletes head of the node
 * @head: pointer to the first node in the list
 * Return: the head's node's data (n)
 */
int pop_listint(listint_t **head)
{
	int node;

	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
