#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit (0-9).
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string.
 * @s: The string to compute the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return (len);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    for (int i = 0; num1[i] != '\0'; i++)
    {
        if (!_isdigit(num1[i]))
        {
            printf("Error\n");
            return (98);
        }
    }

    for (int i = 0; num2[i] != '\0'; i++)
    {
        if (!_isdigit(num2[i]))
        {
            printf("Error\n");
            return (98);
        }
    }

    int len1 = _strlen(num1);
    int len2 = _strlen(num2);

    int *result = malloc(sizeof(int) * (len1 + len2));

    if (result == NULL)
    {
        printf("Error\n");
        return (98);
    }

    for (int i = 0; i < len1 + len2; i++)
    {
        result[i] = 0;
    }

    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;

        for (int j = len2 - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = result[i + j + 1] + mul + carry;
            result[i + j + 1] = sum % 10;
            carry = sum / 10;
        }

        result[i] += carry;
    }

    int start = 0;
    while (start < len1 + len2 - 1 && result[start] == 0)
    {
        start++;
    }

    for (int i = start; i < len1 + len2; i++)
    {
        printf("%d", result[i]);
    }

    printf("\n");

    free(result);

    return (0);
}

