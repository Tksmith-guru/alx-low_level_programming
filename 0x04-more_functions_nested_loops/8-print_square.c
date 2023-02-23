#include "main.h"

/**
 * print-square - Prints a square followed by a new line
 * @c: size of square
 * Return: void
 */

void print_square(int c)
{

	if (c > 0)
	{
		int i = 0;

		while (i < c)
		{
			int j = 0;

			while (j < c)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
