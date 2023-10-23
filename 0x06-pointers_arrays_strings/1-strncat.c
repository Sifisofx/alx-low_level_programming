#include "main.h"
/**
 *  _strncat - concanates two strings
 *  @dest: the first string to be checked
 *  @src: the second string to be checked
 *  @n: the number of bytes
 *  Return: string data
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, length = 0;

	while (dest[index++])
		length++;
	for (index = 0; src[index] && index < n; index++)
		dest[length++] = src[index];
	return (dest);
}
