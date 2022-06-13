#include "main.h"
#include <stdio.h>

/**
 * swat_int - a function that swaps the values of two integers.
 * @a: first swapped value
 * @b: second swapped value
 *
 * Return
 */
void swap_int(int *a, int *b)
{

int temp = *a;
*a = *b;
*b = temp;
}
