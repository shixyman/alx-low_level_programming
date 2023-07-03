#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: parametrewhat you search
 * @accept: the zize of bytes
 * Return: set if matched pointer byte
 * if not set is matched
 */

char *_strpbrk(char *s, char *accept)
{
	int len, count;
	char *p;

	len = 0;
	while (s[len] != '\0')
	{
		count = 0;
		while (accept[count] != '\0')
		{
			if (accept[count] == s[len])
			{
				p = &s[len];
				return (p);
			}
			count += 1;
		}
		len += 1;
	}

	return ('\0');
}
