#include "main.h"

/**
 * _atoi - function main
 * @s: parameter s
 * Return: 0 (always)
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10))
			{
				return (sign == -1 ? INT_MIN : INT_MAX);
			}
			num = num * 10 + digit;
		}
		else if (num > 0)
		{
			break;
		}
		i++;
	}
	return (sign * num);
}
