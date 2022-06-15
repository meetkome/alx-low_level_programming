#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string, 
 * overwriting the terminating null byte (\0) at the end of dest, 
 * and then adds a terminating null byte
 * @dest: first string to be cat
 * @src: second string to cat
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = y = 0;
	while (*(dest + x))
	{
		x++;
	}
	while ((*(dest + x) = *(src + y)))
	{
		x++
		y++
	}
	return (dest);
}

