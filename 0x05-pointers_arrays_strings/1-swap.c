#include <stdio.h>
/**
 * swap_int - swaps the value of two integers
 * @a: the first number to be checked
 * @b: the second number to be checked
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
