#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - It deletes the head node of a listint_t linked list
 * @head: double pointer to the listint_t linked list
 *
 * Return: It returns the head node data(n)
 * If it is empty, it returns 0
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
