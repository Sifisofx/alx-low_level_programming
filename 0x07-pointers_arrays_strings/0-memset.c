#include "main.h"
/**
 *  _memset - entry point
 *  @s: pointed destination
 *  @b: is the constant byte
 *  @n: byte value
 *  Return: the value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
