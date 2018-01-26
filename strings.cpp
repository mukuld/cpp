#include <stdio.h>
#include <string.h>

int main(void)
{
	//Declare a string array
	char string[30];

	//Set everything to zero in this array.
	memset(string, 0, 30);

	for (char i = 0; i < 26; i++)
		string[i] = 65 + i;
	
	printf("String contains: %s.\n", string);

	//Demostrating the usage of sprintf function
	
	sprintf(string, "%f", 3.1415927);

	printf("String changed. Now it contains: %s.\n", string);

	return 0;
}
