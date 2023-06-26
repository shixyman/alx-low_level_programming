#include "main.h"

/**
 * rev_string - function that reverse string
 * @str: parameter of function
 * Return: nothing
 */

void rev_string(char *str)
{
	int lent = 0;

	while (str[lent] != '\0')
	{
		lent += 1;
	}

	int first = 0, last = lent - 1, tmp;

	while (first < last)
	{
		tmp = str[first];
		first = str[last];
		str[last] = tmp;
		first += 1;
		last -= 1;
	}
}

