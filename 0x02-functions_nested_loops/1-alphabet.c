#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * 
 * Description: The code prints all lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{

	char i;


	for (i = 'a'; i <= 'z'; i++)
	
	{
		_putchar(i);
	}

	_putchar('\n');
	return (0);
}
