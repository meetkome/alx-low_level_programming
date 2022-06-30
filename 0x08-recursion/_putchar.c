#include <unistd.h>

/**
 * _putchar - Writes char c to stdout
 * @c: char to print
 *
 * Return: 1
 * On error, -1 is returned, and errno is set appriopraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
