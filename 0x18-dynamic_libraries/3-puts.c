#include "main.h"

/**
 * _puts - display string
 * @str: parameter of the function
 *
 * Return:nothing
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str += 1;
	}
	_putchar('\n');
}
