#include "main.h"
/**
 * infinite_add -function that adds two numbers
 * @n1: first char
 * @n2: second char
 * @r: char
 * @size_r:int
 * Return: char
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int m, n, o, p, q, r;

for (m = 0; n1[m];m++);
for (n = 0; n2[n]; n++);
if (m > size_r || n > size_r)
	return (0);
q = 0;
for (m -= 1, n -= 1, o = 0; o < size_r - 1; m--, n--, o++)
{
	r = q;
if (m >= 0)
	r += n1[m] - '0';
if (n >= 0)
	r += n2[n] - '0';
if (m < 0 && n < 0 && r == 0)
{
	break;
}
q = r / 10;
r[o] = r % 10 + '0';
}
r[o] = '\0';
if (m >= 0 || n >= 0 || q)
	return (0);
for (o -= 1, p = 0; p < o; o--, p++)
{
	q = r[o];
	r[o] = r[p];
	r[p] = q;
}
return (r);
}
