#include "main.h"

/**
 * _islower - checks if a character is a lowercase letter
 * @c: The character to check
 *
 * Return: 1 for lowercases or 0 for others
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
