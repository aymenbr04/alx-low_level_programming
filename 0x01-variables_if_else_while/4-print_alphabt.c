#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase,
 *		except q and e.
 * Return: 0 (success)
*/

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
		if (ch != 'e' && ch != 'q')
{
		putchar(ch);
}
}
	putchar('\n');
	return (0);
}
