#include "main.h"

/**
 * _strspn - function main
 * @s: input
 * @accept: input
 * Return: 0 (always)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return i;
}
