#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: A pointer to the number to modify
 * @index: The index of the bit to set to 0, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)  // Ensure the index is within the valid range
		return (-1);

	unsigned long int mask = 1UL << index;
	*n = *n & ~mask;

	return (1);
}

