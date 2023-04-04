#include "lists.h"

/**
 * sum_listint - It returns the sum of all the data (n) of a listint_t list
 * @head: pointer to the listint_t linked list
 *
 * Return: It returns sum of data (n)
 * If it is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
