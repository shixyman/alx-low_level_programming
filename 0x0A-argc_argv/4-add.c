#include <stdio.h>
#include <stdlib.h>

/**
 * main - display of the number of arguments
 * @argv: parameterof array of strings of arguments
 * @argc: parameter size of the argv
 * Return: always successfully for 0
 */

int main(int argc, char *argv[])
{
	int len = 0, count, sum = 0;

	for (len < argc)
	{
		for (len = 0; argv[len][count]; len += 1)
		{
			if (!(argv[len][count] >= '0' && argv[len][count] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[len]);
		len += 1;
	}
	printf("%d\n", sum);
	return (0);
}
