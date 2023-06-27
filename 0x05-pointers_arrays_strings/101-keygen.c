#include <stdio.h>
#include <stdint.h>

/**
 *  main - crackme
 *  checksum -  error detection
 *  @arg1: parameter
 *  Return: value
 */

int64_t checksum(char *arg1);

int main(void)
{
	char *arg1 = "AAA";

	int a = checksum(arg1);

	printf("sum %d\n", a);

	return (0);
}

int64_t checksum(char *arg1)
{
	char var_18h;
	int64_t var_8h;

	var_8h = 0;

	for (var_18h = *arg1; *arg1 != '\0'; arg1++)
	{
		printf("%c\n", var_18h);
		var_8h = var_8h + var_18h;
		var_18h = *arg1;
	}
	return (var_8h);
}
