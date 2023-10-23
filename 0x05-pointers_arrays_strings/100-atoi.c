#include "main.h"
/**
 *  _atoi - converts a string to an integer
 *  @s: the string to convert
 *  Return: an integer
 */
int _atoi(char *s)
{
	int i = 0, min = 1, pie = 0;
	unsigned int tie = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			pie = 1;
			tie = (tie * 10) + (s[i] - '0');
			i++;
		}
		if (pie == 1)
		{
			break;
		}
		i++;
	}
	tie *= min;
	return (tie);
}
