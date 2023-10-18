#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	int p;

	for (p = '0' ; p <= '9' ; p++)
	{
		for (i = '0' ; i <= '9' ; i++)
		{
			if (!((i == p) || (p > i)))
			{
				putchar(p);
				putchar(i);
				if (!(i == '9' && p == '8'))
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
