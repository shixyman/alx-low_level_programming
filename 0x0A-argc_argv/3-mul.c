#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argv:parameter of array string
 * @argc:parameter of size argv
 * Return: always sucessfully 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
