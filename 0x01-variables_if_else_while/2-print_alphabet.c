#include <stdio.h>
#include <stdlib.h>

/**
 * main - lowercase
 *
 * Description: prints out lowercase alphabets
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
        char letter;
        for (letter = 'a'; letter <= 'z'; letter++)
        {putchar(letter); }

        putchar('\n');

        return (0);

        }
