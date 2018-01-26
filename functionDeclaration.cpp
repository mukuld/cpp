#include <stdio.h>

//Declaring a function with two arguments
int MultiplyNumbers(int value1, int value2)
{
	return value1 * value2;
}

int main(void)
{
	int product = MultiplyNumbers(2,3);
	printf("The answer is: %d\n", product);
}
