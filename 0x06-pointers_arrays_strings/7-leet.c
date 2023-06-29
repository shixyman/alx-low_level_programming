#include "main.c"

/**
 * *leet - crypt your message
 *  a and a == 4
 *  e and e == 3
 *  o and O == 0
 *  t and T == 7
 *  l and L == 1
 *  @str: parameter of string
 *  Return: pointer of String
 */
char *leet(char *str)
{
	int len = 0, count;
	char dicLetter[] = "lLtToOeEaA";
	char dicNumeric[] = "1177003344";

	while (str[len] != '\0')
	{
		count = 0;

		while (count < 10)
		{
			if (dicLetter[count] == str[len])
			{
				str[len] = dicNumeric[count];
			}
			count += 1;
		}
		len += 1;
	}

	return (str);
}
