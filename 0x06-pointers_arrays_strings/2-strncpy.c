#include "main.h"

/**
 * *_strncpy - copy string with n number bytes
 * @dest: parametre destination
 * @src: parameter source
 * @n: parameter number
 * Return: value of new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, count = 0;

	while (dest[len] != '\0')
	{
		len += 1;
	}
	while (src[count] != '\0' && count < n)
	{
		dest[len] = src[count];
		len += 1;
		count += 1;
	}
	for (count = len; count < n; count += 1)
	{
		dest[count] = '\0';
	}
	return (dest);
}
