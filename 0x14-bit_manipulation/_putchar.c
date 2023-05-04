#include <unistd.h>

/**
 * _putchar - It writes the character c to stdout
 * @c: the characterto print
 *
 * Return: On success 1
 * On erroe, -1 is returned, and the error is set appropriately
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
