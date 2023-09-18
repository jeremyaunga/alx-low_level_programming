#include "main.h"

/**
* print_rev - Displays string in reverse
* @s: Contains string
*/

void print_rev(char *s)
{

int s_len = 0;
int i;

while (s[s_len] != '\0')
{
s_len++;
}

for (i = s_len - 1 ; i >= 0 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
