#include "main.h"
/**
 *  _memcpy - Entry point
 * @dest: first input
 * @src: second input
 * @n: third input
 * Return: the value of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
