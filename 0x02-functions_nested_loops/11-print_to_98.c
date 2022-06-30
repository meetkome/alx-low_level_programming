#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @c: argument for integer
 */

void print_to_98(int c)
{
while (c < 98)
{
printf("%d, ", c);
c++;
}
while (c > 98)
{
printf("%d, ", c);
c--;
}
if (c == 98)
printf("%d", c);
printf("\n");
}
