#include "main.h"

/**
 * _strncat - function that concatenates two string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest byte to append
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = y = 0;

	while (*(dest + x))
		x++;
	while (y < n && *(src + y))
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	if (y < n)
		*(dest + x) = *(src + y);
	return (dest);
}

