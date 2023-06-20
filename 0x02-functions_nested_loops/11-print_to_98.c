#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - display all numbers from number to 98
 * new line
 * @number: display the number
 */

void print_to_98(int number)
{
	int a, b;

	if (number <= 98)
	{
		for (a = number; a <= 98 ; a -= 1)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	}
	else if (number >= 98)
	{
		for (b = number; b >= 98; b -= 1)
		{
			for (b = number ; b >= 98 ; b -= 1)
			{
				if (b != 98)
					printf("%d, ", b);
				else if (b == 98)
					printf("%d\n", b);
			}
		}
	}
}
