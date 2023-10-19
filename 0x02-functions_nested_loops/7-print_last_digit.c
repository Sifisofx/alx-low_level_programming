#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @p: The number to be treated
 * Return: The last digit number
 */

int print_last_digit(int p)
{
	int last_d;

	last_d = p % 10;
	if (last_d < 0)
	{
		last_d = last_d * -1;
	}
	_putchar(last_d + '0');
	return (last_d);
}
