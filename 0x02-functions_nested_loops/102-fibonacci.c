#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int num, first = 0, sec = 1, next = 0, sum = 0;
printf("Enter Maximum Number for Fibonacci Series = ");
	scanf("50", &num);
	printf("first 50 Fibonacci Series Numbers:\n", num);
	while (first <= num)
{
	printf("%d ", first);
	sum = sum + first;
	next = first + sec;
	first = sec;
	sec = next;
}
printf("\nThe Sum of Fibonacci Series Numbers = %d\n", sum);
return (0);
}
