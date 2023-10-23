#include <stdio.h>
#include <math.h>
/**
 * main - prints prime numbers of 612852475143
 * Return: 0 always
 */
int main(void)
{
	long x, o, num = 612852475143;
	double square = i(num);

	for (x = 1; x <= square; x++)
	{
		if (num % x == 0)
		{
			o = num / x;
		}
	}
	printf("%ld\n", o);
	return (0);
}
