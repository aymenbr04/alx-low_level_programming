#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: negative or positive.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positif\n", n);
	else if (n == i)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}