#include <stdio.h>

/**
 * main - entry point
 *
 * Description : print alphabet in lowercase
 *		using only putchar function.
 *
 * Return : 0 (success)
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
{
		putchar(alphabet);
		putchar('\n');
		alphabet++;
}
	return (0);
}
