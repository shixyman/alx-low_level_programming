#include "main.h"

/**
 * print_alphabet_x10 - print 10 alphabet
 *
 * Return:0 always successuffy
*/

void print_alphabet_x10(void)
{
	int loop = 0;

	while (loop < 10)
	{
		char i;

		for (i = 'a' ; i <= 'z' ; i += 1)
		{
			_putchar('\n');
		}
		_putchar('\n');
		loop++;
	}
}
