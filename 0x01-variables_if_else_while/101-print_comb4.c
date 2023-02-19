#include<stdio.h>

/**
 * main -  prints all possible different combinations of three digits
 * Return: 0 (pass)
 *
 */
int main(void)
{
	int n, m, l;

	for (n = 38; n < 48; n++)
	{
		for (m = 39; m < 48; m++)
		{
			for (l = 40; l < 48; m++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar('');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


