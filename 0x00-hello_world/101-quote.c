#include <stdio.h>
#include <unistd.h>

/**
 * main - printing a new line
 *
 * Description: prints out new line
 *
 * Return: Always 1 (Sucess)
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

