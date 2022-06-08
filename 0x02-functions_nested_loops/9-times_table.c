#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table
 * Return: no return
 *
 */
void times_table(void)
{
int x;
int y;
int z;
for (x = 0 ; x <= 9 ; x++)
{
for (y = 0 ; y <= 9 ; y++)
{
	z = x * y;
	printf("%d,", z);
}
printf("\n");
}
}
