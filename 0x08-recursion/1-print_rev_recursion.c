#include "main.h"

/**
 * _print_rev_recursion -* display reverse of string
 * @str: parameter of function
 * Return: nothing void
 */
void _print_rev_recursion(char *str)
{
	if (*str)
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
