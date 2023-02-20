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
	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (signed long)sizeof(long));
	printf("Size of a long long int: %d byte(s)\n" sizeof(long long));
	printf("Size of a float: %d byte(s)\n" (signed long)sizeof(float));
	return (0);
}
