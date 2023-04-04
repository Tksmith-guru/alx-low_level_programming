#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adas a new node at the beginning of a listint_t list
 * @head: double pointer to the beginning of a listint_t list
 * @n: input integer to add to the list
 *
 * Return: the address of the new element
 * Or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
