#include "main.h"

/**
 * _isupper - Check if a letter is upper case
 * @c: The parameter under check
 * Return: 1 for upper_case or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
