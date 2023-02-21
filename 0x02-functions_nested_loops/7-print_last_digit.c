#include "main.h"

/**
 * 7-last_digit - Print the last digit of no
 * @n: The no to be treated
 * Return: Value of the last digit of no
 */

int Print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
