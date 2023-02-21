#include "main.h"

/**
 * print_sign-print the of numbers
 * @n: The numbers to be checked
 * Return: 1 for everositive value ,-1 for every negative or zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else 
	{
		_putchar(48);
		return (0);
	}
}
