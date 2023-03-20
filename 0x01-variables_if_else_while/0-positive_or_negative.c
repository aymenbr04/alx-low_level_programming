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
	printf("entre the number: ");
	scanf("%d", &n);

	if (n > 0)
{
		printf("\n%d is positive", n);
}
	else if (n == 0)
{
		printf("\n%d is zero", n);
}
	else
{
		printf("\n%d is negative", n);
}
	return (0);
}
