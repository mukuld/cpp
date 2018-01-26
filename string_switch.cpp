#include <stdio.h>

int main(void)
{
	char inString[1024];
	printf("Type some text and hit Enter:\n");
	gets(inString);
	printf("\n");

	int i = 0;
	while (inString[i])
	{
		switch (inString[i])
		{
			case '\n':
				{
					printf("String[%d]: <carriage return>\n",i);
					break;
				}
			case '\t':
				{
					printf("String[%d]: <tab>\n",i);
					break;
				}
			case ' ':
				{
					printf("String[%d]: <space>\n",i);
					break;
				}
			default:
				{
					printf("String[%d]: %c\n",i, inString[i]);
					break;
				}
		}
		i++;
	}

	return 0;
}
