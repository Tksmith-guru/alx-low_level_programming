#include "main.h"

/**
 * print_binary - It prints the binary represenation of a number
 * @n: the number to be used
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & mask) == 0)
		{
			if (i > 0)
			{
				_Putchar('0');
			}
		}
		else
		{
			_putchar('1');
		}
		maks >>= 1;
	}
}
