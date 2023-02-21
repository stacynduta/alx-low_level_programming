#include "main.h"

/**
 * _abs - Computes the no of the abslotue val of an int
 * @c: the no thats computed
 * Return: Absolute val of the no or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
