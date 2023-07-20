#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: string
 * @n: number of ints
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int len;
	char *str;
	va_list pars;

	va_start(pars, n);
	for (len = 0; len < n; len++)
	{
		str = va_arg(pars, char *);
		if (!str)
			str = "(nil)";
		printf("%s", str);
		if (separator && len != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pars);
}
