#include <stdio.h>
#include <string.h>

char *ReverseString(char *string)
{
	if (!string)
		return NULL;

	int length = strlen(string);
	int count = length / 2;

	for (int i = 0; i < count; i++)
	{
		char temp = string[length - 1 - i];
		string[length -1 - i] = string[i];
		string[i] = temp;
	}
	return string;
}

int main(void)
{
	char inString[1024];

	printf("Type a string to reverse: ");
	gets(inString);
	printf("\n");

	printf("The reversed string is: %s\n", ReverseString(inString));

	return 0;
}
