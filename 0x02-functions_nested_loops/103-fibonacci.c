#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	int sum_of_evens = 0;
	int a, b;
	int sum = 1;

	a = 1;
	b =1;
while (b < 4000000)
{
	sum = a + b;
	a = b;
	b = sum;
	if ((sum <= 4000000) && (sum % 2 == 0))
		sum_of_evens = sum_of_evens + sum;
}
printf("%d\n", sum_of_evens);
return (0);
}
