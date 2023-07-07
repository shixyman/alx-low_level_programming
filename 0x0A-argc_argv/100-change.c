#include <stdio.h>
#include <stdlib.h>

/**
 * main - display    minimum number of coins  depend to cents
 * @argc: arg count
 * @argv: arg of array of pointers
 * Return:  return number
 **/

int main(int argc, char *argv[])
{
	int cents, coin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		switch (cents)
		{
			case 11 ... 25:
				cents -= 1;
				break;
			case 6 ... 10:
				cents -= 5;
				break;
			case 3 ... 5:
				cents -= 2;
				break;
			case 1 ... 2:
				cents -= 1;
				break;
			default:
				cents -= 25;
				break;
		}
		coin += 1;
	}
	return (printf("%d\n", coin), 0);
}
