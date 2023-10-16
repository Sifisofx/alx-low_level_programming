#include <stdio.h>
#include <unistd.h>

/**
 * main - this is the main function
 * return: 1 always
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof( "and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
