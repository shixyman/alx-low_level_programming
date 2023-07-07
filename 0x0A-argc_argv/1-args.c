#include <stdio.h>

/**
 * main - display the argument number
 * @argc: parameter of length
 * @argv: parameter of pointer argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
