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
	int i;
	int sum = 0;

	srand(time(NULL));
	for (i = 0; i < 83; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
	}
	password[83] = '\0';

	sum = (sum ^ 0x5678) & 0x1234567;
	for (i = 0; i < 4; i++)
	{
		password[sum % 83] += i;
		sum /= 2;
	}
	printf("%s\n", password);
	return (0);
}
