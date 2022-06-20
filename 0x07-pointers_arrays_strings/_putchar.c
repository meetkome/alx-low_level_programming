#include <unistd.h>

/**
 * _putchar - c to stdout
 * @c: The char
 *
 * Return: 1
 * On error, -1 is returned, and errno is set apprioriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
