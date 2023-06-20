#include <stdio.h>


/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int before = 1;
	unsigned long int aft = 2;
	unsigned long int lon = 1000000000;
	unsigned long int before1, before2, after1, after2;

	printf("%lu", before);

	for (i = 1; i <= 90; i++)
	{
		printf(", %lu", after);
		after += before;
		before = after - before;
	}

	before1 = (before / lon);
	before2 = (before % lon);
	after1 = (after / lon);
	after2 = (after % lon);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", afterer1 + (after2 / lon));
		printf("%lu", aft2 % l);
		after1 = after1 + before1;
		before1 = after1 - before1;
		after2 = after2 + before2;
		before2 = after2 - before2;
	}
	printf("\n");
	return (0);
}
