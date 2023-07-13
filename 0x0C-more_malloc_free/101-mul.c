#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str += 1;
	}
	_putchar('\n');
}

/**
 * _atoi - convert a string to an integer.
 * @str: char type string
 * Return: integer converted
 */

int _atoi(char *str)
{
	int neg = -1, len = 0, dif = 0;

	while (str[len] != '\0')
	{
		if (str[len] == '-')
		{
			neg *= -1;
		}
		if (str[len] > 47 && str[len] < 58)
		{
			if (dif < 0)
			{
				dif = (dif * 10) - (str[len] - '0');
			}
			else
			{
				dif = (str[len] - '0') * -1;
			}
			if (str[len + 1] < 48 || str[len + 1] > 57)
			{
				break;
			}
		}
		if (neg < 0)
		{
			dif *= 1;
		}
		len += 1;
	}
	return (dif * neg);
}


/**
 * print_int - prints an integer.
 * @n: int
 * Return: 0
 */

void print_int(unsigned long int n)
{

unsigned  long int divisor = 1, i, resp;

for (i = 0; n / divisor > 9; i++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10)
{
	resp = n / divisor;
	_putchar('0' + resp);
}

}

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
(void)argc;

if (argc != 3)
{
	_puts("Error ");
	exit(98);
}
print_int(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\n');

return (0);
}
