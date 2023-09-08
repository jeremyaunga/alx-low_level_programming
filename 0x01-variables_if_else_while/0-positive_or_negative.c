#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;

	if (x > 0)
	{
		printf("%d is positive\n", x);
	}
	else if (x == 0)
	{
		printf("%d is zero\n", x);
	}
	else
	{
		printf("%d is negative\n", x);
	}

	return (0);
}
