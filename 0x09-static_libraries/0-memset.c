#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: parameter constant byte
 * @b: paramter of the character to fille the memory
 * @n: number of bytes
 * Return: a pointer memery of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int len = 0;

	while (n > 0)
	{
		s[len] = b;
		len += 1;
		n -= 1;
	}
	return (s);
}
