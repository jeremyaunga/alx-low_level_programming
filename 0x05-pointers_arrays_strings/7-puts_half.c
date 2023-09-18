#include "main.h"

/**
* puts_half - Prints half of string
* @str: Variable to print half of string
*/

void puts_half(char *str)
{
int str_len = 0;
int half_start;
int i;

while (str[str_len] != '\0')
{
str_len++;
}

if (str_len % 2 == 0)
{
half_start = str_len / 2;
}
else
{
half_start = (str_len + 1) / 2;
}

for (i = half_start ; str[i] != '\0' ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
