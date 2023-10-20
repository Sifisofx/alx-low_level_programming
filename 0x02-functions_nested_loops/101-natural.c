#include <stdio>
/**
 * main - this is the main function
 *
 * Return: 0 always
 */

int main(void)
{
	int i, o = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			o += i;
		}
		i++;
	}
	printf("%d\n", o);
	return (0);
}
