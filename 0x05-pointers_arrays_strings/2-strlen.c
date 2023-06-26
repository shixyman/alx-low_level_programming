#include "main.h"

/**
 * _strlen - function give the length of a string
 * @str: parameter of string to count
 *
 * Return: return value of str
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len += 1;
		str++;
	}
	return (len);
}
