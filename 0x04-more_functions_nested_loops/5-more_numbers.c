#include "main.h"

/**
 * more_numbers - repeate a series of numbers
 *
 * Return: 0 always
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
