#include "main.h"

/**
 * _islower - this function is about  checking if a character is lowercase
 * @alpha : variable
 * Return: Always 0 successfully
 */

int _islower(int alpha)
{
	if (alpha >= 97 && alpha <= 122)
		return (1);
	else
		return (0);
}
