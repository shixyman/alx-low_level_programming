#include "main.h"

/**
 * print_rev - this fucntion about reverse string
 * @str: parameter of the function
 * Return: reverse string
 */

void print_rev(char *str)
{
	int i, lent =0;
	char *strP = str;

	while (*strP != '\0')
	{
		lent +=1 ;
		strP++;
	}
	for (i = lent - 1; i > -1 ; i -= 1)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
