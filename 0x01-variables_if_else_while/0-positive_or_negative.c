#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;

	if (x > 0)
	{
		printf("%d is Positive\n", x);
	}
	else if (x == 0)
	{
		printf("%d is Zero\n", x);
	}
	else
	{
		printf("%d is Negative\n", x);
	}

	return (0);
}
