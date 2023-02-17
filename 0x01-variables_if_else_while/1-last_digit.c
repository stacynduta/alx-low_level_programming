#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main Function
 * Description:the program will assign a rn to a variable n every time thats its executed.
 * Return:0 (pass)
 */

int main(void)
{
	int n, digit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	digit = n % 10;
	
	if(digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	
	return (0);
}
