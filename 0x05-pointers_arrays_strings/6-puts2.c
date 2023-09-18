#include "main.h"

/**
* puts2 - Prints out character of 2 of a string
* @str: Variable to check numbers of 2
*/

void puts2(char *str)
{
int i;

for (i = 0 ; str[i] != '\0' ; i++)
{
if (i % 2 == 0)

_putchar(str[i]);
}
_putchar('\n');
}
