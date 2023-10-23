#include "main.h"
/**
* positive_or_negative - determines if a number is positive, negative or zero
* @i: is the number to be checked
* Return: 0 if successful
*/
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
}