#include<stdio.h>

/**
 * main - Main function
 *
 *  Description:this program will print all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 * Return: 0 (Pass)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit:
	}		
	printf("\n");
	
	return (0);
}
