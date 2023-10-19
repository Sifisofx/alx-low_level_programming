#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int i, o, p, k;

	for (i = 0 ; i <= 2 ; i++)
	{
		for (o = 0 ; o <= 9 ; o++)
		{
			if ((i <= 1 && o <= 9) || (i <= 2 && o <= 3))
			{
				for (p = 0 ; p <= 5 ; p++)
				{
					for (k = 0 ; k <= 9 ; k++)
					{
						_putchar(i + '0');
						_putchar(o + '0');
						_putchar(58);
						_putchar(p + '0');
						_putchar(k + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
