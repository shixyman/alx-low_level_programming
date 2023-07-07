#include <stdio.h>

/**
 * main - display all arguments it receives
 * @argv: parameter array of string
 * @argc: length of the argv
 * Return: 0 successfully
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i += 1;
	}
	return (0);
}
