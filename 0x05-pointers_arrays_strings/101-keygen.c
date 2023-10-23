#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - genrates random password
 * Return: 0 always
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, dh1, dh2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';

	if (sum != 2772)
	{
		dh1 = (sum - 2772) / 2;
		dh2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			dh1++;
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + dh1))
			{
				password[index] -= dh2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
