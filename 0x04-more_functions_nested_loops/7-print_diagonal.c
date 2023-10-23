#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number to be checked
 * Return: the value n
 */
void print_diagonal(int n)
{
	int i, o;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			for (o = 1 ; o <= i ; o++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
