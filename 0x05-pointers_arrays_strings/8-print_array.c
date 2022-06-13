#include <stdio.h>
#include "main.h"

/**
 * print-array - Prints n elemnet of an array of integers
 * @a: pointer integer
 * @n: function parameter
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
