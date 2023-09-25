#include "main.h"

/**
* _strchr - Locates character in string
*@s: String being checked
*@c: Character to be searched for
* Return: Pointer to the first occurence of the char c in s
*/

char *_strchr(char *s, char c)
{
unsigned int i;

for (i = 0; s[i] != '\0'; i++)
if (s[i] == c)
break;

return (s[i] == c ? (s + i) : '\0');
}
