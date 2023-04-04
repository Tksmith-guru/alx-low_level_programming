#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - It returns the nth node of a listint_t linked list
 * @head: pointer to the listint_t linked list
 * @index: index of the node, starting from 0
 *
 * Return: If the node does not exist
 * It returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
