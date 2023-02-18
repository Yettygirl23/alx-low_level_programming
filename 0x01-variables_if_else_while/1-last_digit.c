#include <stdlib.h>
#include <time.h>
#include <stdio.h>
       
/**
 *main - Last digit inputs
 *
 *Return: Always 0 (sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld == 0)
	{printf("Last digit of %i id %i and is 0\n", n, ld); }
	else if (ld < 6)
	{printf("Last digit of %i id %i and is less than 6 and not 0\n", n, ld); }
	else 
	{printf("Last digit of %i id %i and is greater than 5\n", n, ld); }
	
	return (0);
}
