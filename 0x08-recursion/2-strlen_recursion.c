#include "main.h"

/**
 * _strlen_recursion - calcul length of a string
 * @str: parameter of string
 * Return: return length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*str =! '\0')
	{
		len += 1;
		len += _strlen_recursion(str +1);
	}

	return (len);
}
