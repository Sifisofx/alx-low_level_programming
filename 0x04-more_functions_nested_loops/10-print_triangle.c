#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: the number to be checked
 */
void print_triangle(int size)
{
	int i, o, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (o = size - i; o > 1; o--)
			{
				_putchar(32);
			}
			for (p = 0; p <= i; p++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
