#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - adds all arguements
 * @n: parameter of number of arguements
 * Return: 0 is n is 0 or return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum;
	unsigned int len;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(numbers, n);
	for (len = 0; i < n; len++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
