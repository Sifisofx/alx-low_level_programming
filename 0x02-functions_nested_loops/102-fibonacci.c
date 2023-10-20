#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: 0 always
 */
int main(void)
{
	int i = 0;
	long o = 1, p = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", o);
		else if (i == 1)
			printf(", %ld", p);
		else
		{
			p += o;
			o = p - o;
			printf(", %ld", p);
		}
		i++;
	}
	printf("\n");
	return (0);
}
