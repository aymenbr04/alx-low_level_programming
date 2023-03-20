#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print the alphabet in reverse.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int alp;

	for (alp = 'z'; alp >= 'a'; alp--)
{
		putchar(alp);
}
	putchar('\n');
	return (0);
}
