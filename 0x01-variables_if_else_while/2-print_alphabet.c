#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char lowercase [] = "CAPITAL";
	putchar("%s in lowercase is represented as %s",
		lowercase, tolower(lowercase));

	return 0;


}
