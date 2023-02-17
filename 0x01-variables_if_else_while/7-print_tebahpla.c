#include<stdio.h>

/**
 * main - Main Function
 *
 * Return: 0 (Pass)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');

	return (0);
}
