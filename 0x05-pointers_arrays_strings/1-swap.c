#include "main.h"

/**
 * swap_int - swaps the values of two intergers
 * @a: the first integer
 * @b: the second integer
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
