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
	int len1, len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	;
	for (len2 = 0; src[len2] != '\0'; len2++)
		dest[len1 + len2] = src[len2];
	dest[len1 + len2] = '\0';
	return (dest);
}

