#include "main.h"

/**
 * _strpbrk - function main
 * @s: parameter
 * @ accept: parameter
 * Return: 0 (always)
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return &s[i];
		}
	}

	return NULL;
}
