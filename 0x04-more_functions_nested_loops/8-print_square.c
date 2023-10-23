#include "main.h"
/**
 * print_square - prints a square
 * @size: is the number to be checked
 */
void print_square(int size)
{
	int i, o;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (o = 0; o < size; o++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
