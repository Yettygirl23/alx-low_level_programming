#include <stdio.h>
#include <stdlib.h>

/**
 * main - sizes
 *
 * Description: prints out new line
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (signed long)sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", (signed long)sizeof(float));
	return (0);
}
