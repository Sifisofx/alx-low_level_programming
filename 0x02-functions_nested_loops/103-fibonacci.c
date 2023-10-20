#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: 0 always
 */
int main(void)
{
	int i = 0;
	long o = 1, p = 2, sum = p;

	while (p + o < 4000000)
	{
		p += o;
		if (p % 2 == 0)
			sum += p;
		o = p - o;
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
