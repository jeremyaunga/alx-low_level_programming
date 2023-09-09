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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is %s\n", n, "Positive");
	}
	else if (n < 0)
	{
		printf("%d is %s\n", n, "Negative");
	}
	else
	{
		printf("%d is %s\n", n "Zero");
	}

	return (0);
}
