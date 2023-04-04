#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to the listint_t list
 * @n: input integer to add to the listint_t list
 *
 * Return: the address of the new element
 * Or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint *current;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	currnet = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
