#include "main.h"

/**
 * print_array - prints an element in an array
 * @a: parameter one
 * @n: parameter two
 * Return: 0 (success)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
