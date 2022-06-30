#include <unistd.h>

/**
 * _putchar - stdout character c
 * @c: print this character
 *
 * Return: 1 on success
 * on error, return -1, and errno is set appriopriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
