#include <unistd.h>
#include "main.h"
/**
  * _putchar - writes character c to stdout
  *&c - the charecter
  * Return: on success 1. on error -1 with the error message
  */
int _putchar(char c)
{
    return write(1, &c, 1);
}
