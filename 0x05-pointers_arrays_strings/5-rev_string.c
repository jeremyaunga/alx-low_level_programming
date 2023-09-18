#include "main.h"

/**
* rev_string - Reverses string
* @s: Var to reverse a string
*/

void rev_string(char *s)
{
int leng, i, z;

i = 0;
while (s[i] != '\0')
{
i++;
}
leng = i;
for (i = 0 ; i < leng / 2 ; i++)
{
z = s[i];
s[i] = s[leng - i - 1];
s[leng - i - 1] = z;
}
}
