#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: the string to be encoded
 * Return: value of s
 */
char *rot13(char *s)
{
	int i, o;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char drot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (o = 0; o < 52; o++)
		{
			if (s[i] == d1[o])
			{
				s[i] = drot[o];
				break;
			}
		}
	}
	return (s);
}
