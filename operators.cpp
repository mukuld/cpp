#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	
	//Adding a to itself after a + b is calculated
	printf("a++ + b = %d\n", a++ + b);
	
	//Adding simple a and b. However, a is already incremented above
	printf("a + b = %d\n", a + b);
	
	//Here a will be increased by 1 before we calculate a + b
	printf("++a + b = %d\n", ++a + b);

	//return 0;
}
