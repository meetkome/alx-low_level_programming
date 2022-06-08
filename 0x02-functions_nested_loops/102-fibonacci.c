#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int num;
        long b = 1;
       long c = 2;
      int sum = 50;
	for (num = 1; num <= (sum / 2); num++)

{
	printf("%li %li ", b, c);
	b += c;
	c += b;
}
if (sum % 2 == 1)
printf("%li", b);
printf("\n");
return (0);
}
