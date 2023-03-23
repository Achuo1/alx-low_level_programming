#include "main.h"

/**
 *positive_or_negative - function to know if i is + or -
 * @i: the test parameter
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
