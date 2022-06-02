#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	clrscr();
	printf("Size of a char: %2d byte(s)\n" ,sizeof( char));

	printf("Size of an int:  %2d byte(s) \n ", sizeof(int)); 

	Printf("Size of a long int: %2d byte(s) \n ", sizeof(long int));

	Printf("Size of a long  long int: %2d byte(s) \n ", sizeof(long long int));

	Printf("Size of a float: %2d byte(s) \n ", sizeof(float));



	return (0);
}
