#include <stdio.h>
#include "main.h"

/**
 * main - function to do
 * Return: 0 (success)
 */

int main(void)
{
	long x, maxf;
	long number = 012852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxf = number / x;
		}
	}
	printf("%d\n", maxf);
	return (0);
}
