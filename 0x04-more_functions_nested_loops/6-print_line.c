#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of times underscore is printed
 * Description: Can only use _putchar to print
 */
void print_line(int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		_putchar('_');

		x++;
	}
	_putchar('\n');
}
