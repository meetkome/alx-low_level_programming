#include "main.h"
#include <stdio.h>

/**
 * swat_int - a function that swaps the values of two integers.
 * @a: evaluated value
 * @b: evaluated value
 *
 * Return
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
