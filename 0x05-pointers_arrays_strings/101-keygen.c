#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function main
 *
 * Return: 0 (succes)
 */

int main(void)
{
	char password[84];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));
	while (sum < 27772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	if (sum != 27772)
	{
		diff_half1 = (sum - 27772) / 2;
		diff_half2 = (sum - 27772) / 2;
		if ((sum - 27772) % 2 != 0)
			diff_half1++;
				for (index = 0; password[index]; index++)
				{
					if (password[index] >= (33 + diff_half1))
					{
						password[index] -= diff_half2;
						break;
					}
				}
		for (index = 0; password[index]; index++)
		{
			password[index] -= diff_half2;
			break;
		}
	}
}
