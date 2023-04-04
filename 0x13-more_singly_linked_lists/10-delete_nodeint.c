#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - It deletes the node at the index of the list
 * @head: double pointer to the listint_t linked list
 * @index: index of the node to be deleted, starting from 0
 *
 * Return: It returns 1 if it succeeds
 * If it fails, it will return -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
