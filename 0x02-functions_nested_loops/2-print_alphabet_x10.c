#include "main.h"

/**
 * print_alphabet- Entry point
 *
 * Return: Always 0 (Success);
 */
void print_alphabet(void)
{
	char i;
	char j;

	for (j = 0; j <= 'z'; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
