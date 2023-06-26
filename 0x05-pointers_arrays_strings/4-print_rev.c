#include "main.h"

/**
 * print_rev - this fucntion about reverse string
 * @str: parameter of the function
 * Return: reverse string
 */

void print_rev(char *str)
{
	int lent = _strlen(str), i;

	for (i = lent; i > 0 ; i += 1)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
