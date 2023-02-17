nclude <stdio.h>

/**
 * main - MAin Function
 *
 * Description:this program that prints the alphabet in lowercase, then a new line.
 *
 * Return: 0 (Pass)
 */

int main(void)
{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
											}
		putchar('\n');

		return (0);
}
