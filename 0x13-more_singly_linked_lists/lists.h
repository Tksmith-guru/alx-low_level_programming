#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Singly linked list
 * @n: input integer
 * @next: points to the next node
 *
 * Description: Singly linked lists node structures
 * for the Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct listp_s - Singly linked list
 * @p: pointer for the nodes
 * @next: pointer to the next node
 *
 * Description: Singly linked list of pointers
 */
typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;

size_t print_listint(const listint_t *h);

#endif
