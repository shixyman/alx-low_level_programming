#include "main.h"

/**
 * factorial - calculate factorial with recursion
 * @num: parameter given to calculte
 * Return: return factorial
 */

int factorial(int num)
{
	if (num < 0)
	{
		return (-1);
	}
	if (num == 0)
	{
		return (1);
	}
	return (num * factorial(num - 1));
}
