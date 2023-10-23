#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @n: the number to be checked
 * Return: the value n
 */
char *leet(char *n)
{
	int i, o;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (o = 0; o < 10; o++)
		{
			if (n[i] == s1[o])
			{
				n[i] = s2[o];
			}
		}
	}
	return (n);
}
