#include  "main.h"


/**
* _strcpy - Copies string pointed by src including null byte
* @dest: Destination of copy
* @src: Source of copy
* Return: Copy of the source string
*/
char *_strcpy(char *dest, char *src)
{
int counter, i;

counter = 0;

while (src[counter] != '\0')
{
counter++;
}

for (i = 0; i < counter; i++)
{
dest[i] = src[i];
}

dest[counter] = '\0';

return (dest);
}
