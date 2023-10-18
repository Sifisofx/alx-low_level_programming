#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: 0 alwats
 */
int main(void)
{
	int i = '0';
	int p = '0';
	int k = '0';

	for (k = '0' ; k <= '9' ; k++)
	{
		for (p = '0' ; p <= '9' ; p++)
		{
			for (i = '0' ; i <= '9' ; i++)
			{
				if (!((i == p) || (p == k) || (p > i) || (k > p)))
				{
					putchar(k);
					putchar(p);
					putchar(i);
					if (!(i == '9' && k == '7' && p == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
