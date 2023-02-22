#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: character to cmopare
 *
 * Return: 1 if true, 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
