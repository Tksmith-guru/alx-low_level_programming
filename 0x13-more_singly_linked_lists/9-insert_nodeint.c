#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - It inserts a new node at a given position
 * @head: double pointer to the listint_t linked list
 * @idx: index of the list for the new node, starting from 0
 * @n: input integer to be added to the listint_t list
 *
 * Return: the address of the new node
 * If it fails, return NULL
 * If it si not possible to add new node at index idx, return NULL
 */
listint_t *insert_nodeint_at_index(listint_t *head, unsigned int idx, int n)
{
	unsigned int i;
	listint *current, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *head;
		for (i = 0; i < idx -1 && current != NULL; i++)
		{
			currnet = current->next;
		}
		if (currnet == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}

