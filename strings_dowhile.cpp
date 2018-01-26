#include <stdio.h>
int main(void)
{
	char inString[1024];
	printf("Type some text and hit Enter:\n");
	gets(inString);
	printf("\n");

	int i = 0;
	do
	{
		if (!inString[i])
			continue;

		printf("String[%d]: %c\n", i, inString[i]);
	} while (inString[i++]);

	return 0;
}
