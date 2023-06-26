#include "main.h"

/**
 * _stcpy - copy string by pointer
 * @dest: parameter of function
 * @src: paramter of function
 * Return:dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len += 1;
	}
	for (i = 0; i < len; i += 1)
	{
		dest[i] = src[i];
	}
	return (dest);
}

