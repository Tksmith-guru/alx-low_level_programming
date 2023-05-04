#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - It  stes the value of bit to 0 at a given index
 * @n: the number to be set at index 0
 * @index: the index of the bit to set, starting from 0
 *
 * Return: 1 if it works
 * Otherwise -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizezof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (-1);
}
