#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers of base 16.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int base;

	for (base = 0; base <= 9; base++)
{
		putchar(base + '0');
}
	for (base = 'a'; base <= 'f'; base++)
{
		putchar(base);
}

	putchar('\n');
	return (0);
}
