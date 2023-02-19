#include <stdio.h>

/**
 * main - Print alphabet in the lowercase and uppercase
 * followed by a new line
 * Return : always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar(ch);
	putchar("\n");
	return (0);
}
