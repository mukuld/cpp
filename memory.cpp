#include <stdio.h>
#include <malloc.h>

int main(void)
{
	char *string = NULL;

	string = (char *)malloc(50);

	sprintf(string, "The number pi is approximately: %f.", 3.1415927);

	printf("%s\n",string);

	free(string);
	return 0;

}
