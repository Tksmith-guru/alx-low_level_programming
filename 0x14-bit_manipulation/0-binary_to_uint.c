#include <stdio.h>
#include <string.h>
#include "main.h"
#include <math.h>

/**
 * binary_uint - It converts a binary to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0
 * If there is more char in b
 */

unsigned int binary_uint(const char *b)
{
	if (!b)
	{
		return (0);
	}

	int len = strlen(b);
	unsigned int res = 0;
	int i = len - 1;
	int base = 1;

	while (i >= 0)
	{
		if (b[i] == '1')
		{
			res += base;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		base *= 2;
		i--;
	}

	return (res);
}
