#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: number to be checked
 * Return: 1 if c is an uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}