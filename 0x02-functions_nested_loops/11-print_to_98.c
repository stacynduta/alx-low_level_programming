#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - Prints all natural no
 * @n: The number to start printing
 * Return: Always 0
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; --i)
			printf("%d, ", i);
	} else
	{
		for (i = n; i < 98; ++i)
			printf("%d, ", i);
	}
	printf("98\n");
}
