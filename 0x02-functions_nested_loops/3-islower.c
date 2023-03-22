#include "main.h"
/**
 * _islower - function to
 *
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 22)
		return (0);
	else
		return (1);
}
