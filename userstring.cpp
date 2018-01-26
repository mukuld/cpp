#include <stdio.h>
#include <string.h>

int main(void)
{
	char inString[1024];
	printf("Type the text to convert and press Enter: ");
	gets(inString);
	printf("\n");

	int length;
	length = strlen(inString);

	int *lenptr = &length;

	printf("You entered %s and the length is %d.\n", inString, length);
	
	for (int i = 0; i < length; i++)
		printf("The character %c in decimal notation is %d, in hexadecimal is %x and in octal notation is %o\n", inString[i], inString[i], inString[i], inString[i]);
//		printf("The character %c in hexadecimal notation is %x\n", inString[i], inString[i]);
//		printf("The character %c in octal notation is %o\n", inString[i], inString[i]);

	return 0;
}
