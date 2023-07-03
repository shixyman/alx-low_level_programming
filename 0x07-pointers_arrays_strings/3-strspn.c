#include "main.c"

/**
 * _strspn - gets the length of a prefix substring
 * @s: paramter of pointer string
 * @accept: parameter accept string
 * Return: unsigngned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len, count;

	for (len = 0; s[len] != '\0'; len += 1)
	{
		for (count = 0; accept[count] != s[len]; count += 1)
		{
			if (accept[count] == '\0')
			{
				return (count);
			}
		}
	}
	return (count);
}
