#include "main.h"
/**
 * puts2 - prints other characters of a string
 * @str: the string to be checked
 * Return:void
 */
void puts2(char *str)
{
	int i, o = 0;

	while (str[o] != '\0')
	{
		o++;
	}
	for (i = 0; i < o; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
