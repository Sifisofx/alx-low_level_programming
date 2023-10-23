#include <stdio.h>
/**
 *  _strlen - Returns the length of a string.
 * @str: the string used to get the length.
 * Return: the length of @str.
 */
int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
