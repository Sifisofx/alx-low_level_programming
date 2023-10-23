#include <stdio.h>
#include <math.h>
/**
 * main - prints prime numbers of 612852475143
 * Return: 0 always
 */
int main(void)
{
	long x, o;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			o = number / x;
		}
	}
	printf("%ld\n", o);
	return (0);
}
