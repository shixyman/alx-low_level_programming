#include "main.h"

/*
 * function print_function - display alphabet 
 *
 * Return:0 0 always successfuly
*/

void print_alphabet(void)
{	
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar (alphabet);
		alphabet +=1 ;
	}
	_putchar('\n');
}
