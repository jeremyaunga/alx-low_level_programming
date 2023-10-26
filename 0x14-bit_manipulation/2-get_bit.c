#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number to extract the bit from
 * @index: The index of the bit to get, starting from 0
 *
 * Return: The value of the bit at the specified index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	unsigned long int mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}

