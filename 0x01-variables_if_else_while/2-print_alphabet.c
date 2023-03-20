#include <stdio.h>

/**
 * main - print the alphabet in lowercase,
 *
 * followed by newline
 *
 * Return: 0 (success)
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
{
		putchar(alphabet);
		alphabet++;
}
	putchar('\n');
	return (0);
}
