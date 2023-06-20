#include "main.h"

/**
 * _isalpha - check if the character is alpha or not
 *
 * @alpha : it is argument
 *
 * Return: 0 always successfully
 */

int _isalpha(int alpha)
{
	if (alpha >= 65 && alpha <= 90)
	{
		return (1);
	}
	else if (alpha >= 97 && alpha <= 122)
	{	return (0);
	}
	return (0);
}
