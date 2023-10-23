#include "main.h"
/**
 *   _strncpy - copies inputted number from
 *   string src into dest.
 *  @dest: stores a string.
 *  @src: the source string.
 *  @n: maximum number of bytes copied.
 *  Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, length = 0;

	while (src[index++])
		length++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = length; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
