#include "main.h"

/**
 * verify_prime - check if number is prime
 * @num: parametre of number
 * @div: parameter of divisor
 * Return: result 0 or -1
 */
int verify_prime(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (num / 2 == div)
		return (1);
	return (verify_prime(num, div + 1));
}
/**
 * is_prime_number - checking if a number is prime
 * @n: number be checked
 *
 * Return: 0 or -1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (verify_prime(n, 2));
}
