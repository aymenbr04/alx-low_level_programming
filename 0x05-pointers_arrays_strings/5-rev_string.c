#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Retuen: Nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	for (l = 0; s[1] != '\0'; ++1)

	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}