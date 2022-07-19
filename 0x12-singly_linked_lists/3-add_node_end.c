#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 * @head: pointer to the first node of the list
 * @str: string to copy to new node
 * Return: NULL if it fails / starting address of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else if ((*head)->next == NULL)
		(*head)->next = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
