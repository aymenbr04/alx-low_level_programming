#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int comb = 0;

	while (comb < 10)
{
	putchar(comb + '0');
	if (comb != 9)
	{
		putchar(',');
		putchar(' ');
	}
	comb++;
}
	putchar('\n');
	return (0);
}

