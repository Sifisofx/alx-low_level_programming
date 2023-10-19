#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: The number to be computed
 * Return: the Absolute value of a number or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	return (0);
}
