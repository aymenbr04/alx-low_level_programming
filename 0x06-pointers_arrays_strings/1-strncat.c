#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from
 *
 * Return: 8dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	ddest[c + i] = '\0';

	return (dest);
}
