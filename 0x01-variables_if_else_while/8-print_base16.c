#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: 0 always
 */

int main(void)
{
	int i;
	char p;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (p = 'a' ; p <= 'f' ; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
