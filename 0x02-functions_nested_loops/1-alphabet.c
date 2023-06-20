#include "main.h"

/**
 * print_alphabet - display alphabet with putchar
 *
 * Return: 0  always successfuly
*/
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar (alphabet);
		alphabet += 1;
	}
	_putchar('\n');
}
