#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is the main function
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	int p;

	for (i = 0 ; i < 100 ; i++)
	{
		for (p = 0 ; p < 100 ; p++)
		{
			if (i < p)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((p / 10) + 48);
				putchar((p % 10) + 48);
				if (i != 98 || p != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
