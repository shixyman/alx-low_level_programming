#include "main.h"
/**
 * infinite_add -  adds two numbers
 * @n1: first number parameter
 * @n2: second number parameter
 * @r: result
 * @size_r: result lenght
 * Return: sum
 *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len = 0, count = 0, hel, loop = 0, var, stg, diff = 0;

	while (n1[len] != '\0')
	{
		len++;
	}
	while (n2[count] != '\0')
	{
		count++;
	}
	if (len > count)
	{
		loop = len;
	}
	else
	{
		loop = count;
	}
	if (loop + 1 > size_r)
	{
		return (0);
	}
	r[loop] = '\0';
	for (hel = loop - 1; hel >= 0; hel--)
	{
		len--;
		count--;
		if (len >= 0)
			var = n1[len] - '0';
		else
			var = 0;
		if (count >= 0)
			stg = n2[count] - '0';
		else
			stg = 0;
		r[hel] = (var + stg + diff) % 10 + '0';
		diff = (var + stg + diff) / 10;
	}
	if (diff == 1)
	{
		r[loop + 1] = '\0';
		if (loop + 2 > size_r)
			return (0);
		while (loop-- >= 0)
			r[loop + 1] = r[loop];
		r[0] = diff + '0';
	}
	return (r);
}
