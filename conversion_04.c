
#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	char string[10] = "1234567890";
	long integer;
	integer = strtol(string, NULL, 10);
	printf("Number is %lu", integer);
}
