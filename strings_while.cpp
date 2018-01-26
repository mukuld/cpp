#include <stdio.h>

int main(void)
{
	char x[1024];
	printf("Type some text and hit Enter:\n");
	gets(x);
	printf("\n");

	int i = 0;
	while (x[i])
		printf("String[%d]: %c\n", i, x[i++]);

	return 0;
}
