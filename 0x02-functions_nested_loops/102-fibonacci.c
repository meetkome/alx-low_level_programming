#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int num, first = 1, sec = 2, sum = 50;
	for (num = 1; num <= (sum / 2); num++)

{
	printf("%li %li ", first, sec);
	first += sec;
	sec += first;
}
if (sum % 2 == 1)
printf("%li", a);
printf("\n");
return (0);
}
