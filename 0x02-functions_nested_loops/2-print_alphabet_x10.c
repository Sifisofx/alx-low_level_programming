#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets in lower case 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
	char i;
	int o = 1;

	for (o = 1 ; o <= 10 ; o++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
	}
}
