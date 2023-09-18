#include "main.h"

/**
 * _memcpy()- function copy the memory area
 * @dest: parapmeter of pointer block memory
 * @src: paramater of pointer block memory
 * @n:paramter of number of bytes to be compared
 * Return:return copy memory changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int len = 0;

	while (n > 0)
	{
		dest[len] = src[len];
		len += 1;
		n -= 1;
	}
	return (dest);
}
