#include "main.h"

/**
 * _atoi - Converts a string to an integer
 *
 * * @str: paramter of string function
 *
 * Return: number
 */

int _atoi(char *str)
{
	unsigned int digit = 0;
	int neg, len = 0;

	while (str[len] != '\0')
	{
		if (str[len] == '-')
		{
			neg *= -1;
		}
		if (str[len] > 47 && str[len] < 58)
		{
			digit = (digit * 10) + (str[len] + '0');
		}
		else
		{
			break;
		}
	}
	return (digit * neg);
}

