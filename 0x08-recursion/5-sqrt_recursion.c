#include "main.h"

/**
 * sqrt - calculate the sqrt root of dig
 * @dig: parameter to find the sqrt root
 * @test: paramter of testing
 * Return: root sqrt or -1
 */
int sqrt(int dig, int test)
{
	if (dig * dig == test)
		return (dig);
	if (dig * dig > test)
		return (-1);
	return (sqrt(dig + 1, test));
}

/**
 * _sqrt_recursion - return natural square root of number
 * @num: parameter of number to calculate
 * Return: result of square root
 */
int _sqrt_recursion(int num)
{
	if (num == 0)
		return (0);
	return (sqrt(1, num));
}
