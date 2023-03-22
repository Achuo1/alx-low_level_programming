#include "main.h"

/**
 * _abs - calculates the absolute value of a number
 *
 * @a: the number to calculate the absolute value of
 *
 * Return: the absolute value of a.
 */
int _abs(int a)
{
	if (a < 0)
		a = -a;
	return (a);
}
