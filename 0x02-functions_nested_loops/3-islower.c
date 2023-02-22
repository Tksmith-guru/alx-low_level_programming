#include "main.h"
/**
 * test_islower - Entry point
 *
 * @c: character to cmopare
 *
 * Return: 1 if true, 0 if false
 */

int test_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
