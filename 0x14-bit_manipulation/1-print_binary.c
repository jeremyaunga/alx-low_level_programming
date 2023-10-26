#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int mask = 1UL << 63;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; i < 64; i++)
	{
		if (n & mask)
			break;
		mask >>= 1;
	}

	for (; i < 64; i++)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		count++;
		mask >>= 1;
	}
}

