#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: parameter to be search
 * @c: paramter of the characterto search
 * Return: return  NULL or index c
 */

char *_strchr(char *s, char c)
{
	int len;
	
	for ( len = 0; s[len] >= '\0'; len += 1)
	{
		if (s[len] == c)
		{
			return (s + len);
		}
	}
	return ('\0');
}
