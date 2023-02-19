#include<stdio.h>

/**
 * main -Prints all single digit number of base
 * 10 starting from 0, followed by a new line
 * Reruen: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
