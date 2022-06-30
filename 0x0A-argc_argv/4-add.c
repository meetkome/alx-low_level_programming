#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints positive number
 * @argv: argument count
 * @argc: array of argument
 * Description - If no number is passed to the program, print 0
 * Return: if funtion is correct, print 0, else print 1
 */
int main(int argc, char *argv[])
{
	int total, i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}

