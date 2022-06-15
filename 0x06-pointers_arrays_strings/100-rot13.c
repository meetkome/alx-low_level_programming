#include "main.h"

char *rot13(char *s)
{
	int u, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (u = 0; *(s + u); u++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s + u))
			{
				*(s + u) = b[j];
				break;
			}
		}
	}
	return (s);
}
