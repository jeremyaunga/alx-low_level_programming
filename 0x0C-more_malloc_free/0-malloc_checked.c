#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
/* using void for multiple vars being of different types*/
void *alloc;

alloc = malloc(b);

if (alloc == NULL)
{
exit(98);
}
return (alloc);
}
