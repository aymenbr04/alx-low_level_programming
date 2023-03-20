#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of two two-digit numbers.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i < 8)
{
	int j = i + 1;

	while (j < 9)
{
	int k = j + 1;

	while (k < 10)
{
		putchar(i + '0');
		putchar(j + '0');
		putchar(k + '0');
	if (i != 7 || j != 8 || k != 9)
{
		putchar(',');
		putchar(' ');
}
	k++;
}
	j++;
}
	i++;
}
	putchar('\n');
	return (0);
}
