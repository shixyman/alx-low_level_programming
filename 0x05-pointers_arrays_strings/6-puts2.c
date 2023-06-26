#include "main.h"

/**
 * puts2 -  print everycharacter of as string
 * @str: parameter of string give
 * return:nothing
 */

void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len += 1;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
