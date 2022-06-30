#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first swapped value
 * @b: second swapped value
 *
 * Return
 */
void swap_int(int *a, int *b)
{

int x = *a;
*a = *b;
*b = x;
}
