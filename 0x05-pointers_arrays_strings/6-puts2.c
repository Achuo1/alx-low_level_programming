#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: 0 (succes)
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
