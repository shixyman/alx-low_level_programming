#include "main.h"

/**
 *  *_strcat - concatenate two strings
 *  @src: source parameter
 *  @dest: destination parameter
 *  Return: return char
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, count = 0;

	while (dest[len] != '\0')
	{
		i += 1;
	}
	while (src[count] != '\0')
	{
		dest[len] = src[count];
		len += 1;
		count += 1;
	}
	dest[len] = '\0';
	return (dest);
}
