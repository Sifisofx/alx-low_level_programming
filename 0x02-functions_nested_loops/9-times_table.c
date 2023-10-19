#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Returns:void
 */

void times_table(void)
{
	int i, o, p, k, l;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (o = 0 ; o <= 9 ; o++)
		{
			p = i * o;
			if (p > 9)
			{
				k = p % 10;
				l = (p - k) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(l + '0');
				_putchar(k + '0');
			}
			else
			{
				if (o != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(p + '0');
			}
		}
		_putchar('\n');
	}
}
