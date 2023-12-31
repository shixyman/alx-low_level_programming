#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * ...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int len;
	va_list pars;

	va_start(pars, n);
	for (len = 0; len < n; len++)
	{
		printf("%d", va_arg(pars, int));
		if (separator && len != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
