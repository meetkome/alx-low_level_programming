#include "main.h"
#include <stdio.h>

/**
 * main - print the num of arguments pass to it
 * @argc: argument count
 * @argv: argument vector, strings array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return(0);
}
