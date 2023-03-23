#include "main.h"

/**
 * print_alphabet - use the _putchar to print
 *		the alphabet
*/
void print_alphabet(void);
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
