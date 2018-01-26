#include <stdio.h>
#include <string.h>
#include <malloc.h>

char *ReverseString(char *string)
{
	if (!string)
		return NULL;
	
	int length = strlen(string);
	int count = length / 2;

	for (int i = 0; i < count; i++)
	{
		char temp = string[length - 1 - i];
		string[length - 1 -i] = string[i];
		string[i] = temp;
	}

	return string;
}

int main(void)
{
	char firstString[100], secondString[100];
	char *combinedString = NULL;
	combinedString = (char *)malloc(200);

	char endline = '\n';

	printf("Enter your first word: ");
	gets(firstString);
	printf("%c",endline);	

	printf("Enter your second word: ");
	gets(secondString);
	printf("%c",endline);	

	sprintf(combinedString, "%s %s", ReverseString(secondString), ReverseString(firstString));

	printf("If you saw these two words in a mirror, it would read '%s'\n", combinedString);
}
