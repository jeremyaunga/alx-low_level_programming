#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 Always.
 */
char getRandomChar()
{
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

void generateRandomPassword(char *password, int length)
{
    for (int i = 0; i < length; i++)
    {
        password[i] = getRandomChar();
    }
    password[length] = '\0';
}

int main()
{

    srand(time(NULL));

    int passwordLength = 7; 
    char password[passwordLength + 1];

    generateRandomPassword(password, passwordLength);

    printf("Generated Password: %s\n", password);

    return 0;
}

