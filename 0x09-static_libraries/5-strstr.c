#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: parameter of string to searched
 * @needle: parameter of substring to located.
 * Return: If the substring is located - a pointer to the beginning
 *         If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int len;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		len = 0;

		if (haystack[len] == needle[len])
		{
			do {
				if (needle[len + 1] == '\0')
					return (haystack);

				len++;

			} while (haystack[len] == needle[len]);
		}

		haystack++;
	}

	return ('\0');
}
