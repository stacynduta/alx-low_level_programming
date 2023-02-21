#include <unistd.h>

/**
 * _putchae -writes the char of c to stdoutt
 * @C: The character to print
 * Return: succces 1.
 *On eerr, -1 is returned, and errono is displayed.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
