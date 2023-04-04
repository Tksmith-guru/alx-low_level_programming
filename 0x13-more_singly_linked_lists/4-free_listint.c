#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - it frees a listint_t list
 * @head: pointer to the listint_t list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
