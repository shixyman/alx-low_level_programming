#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: parameter to be search
 * @c: paramter of the characterto search
 * Return: return  NULL or index c
 */

char *_strchr(char *s, char c)
{
	int len = 0;

	while (s[len] != '\0')
	{
		if (s[len] == c)
			return (s + len);
		len += 1;
	}

	return ('\0');
}
