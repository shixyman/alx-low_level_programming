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
		char alpha;

		for (alpha = 'a' ; alpha <= 'z' ; alpha += 1)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		loop++;
	}
}
