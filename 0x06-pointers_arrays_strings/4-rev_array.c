#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: integer array to be reversed
 * @n: number of element
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, p;
	n = n - 1;
	while (i < n)
	{
	p = *(a + i);
	*(a + i) = *(a + n);
	*(a + n) = p;
	i++;
	n--;
	}
}
