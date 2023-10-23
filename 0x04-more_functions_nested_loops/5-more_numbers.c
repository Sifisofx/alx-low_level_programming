#include "main.h"
/**
 * more_numbers - prints numbers 0 to 14, 10 times
 * Return:void
 */
void more_numbers(void)
{
	int count, i;

	for (count = 0 ; count <= 10 ; count++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
