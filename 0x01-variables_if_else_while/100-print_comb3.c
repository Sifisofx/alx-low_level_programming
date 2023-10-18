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

	for (i = '0' ; i <= '9' ; i++)
	{
		for (p = '0' ; p <= '9' ; p++)
		{
			if (!((i == p) || (p > i)))
			{
				putchar(p);
				putchar(i);
				if (!(p == '9' && i == '8'))
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
