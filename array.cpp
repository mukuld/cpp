#include <stdio.h>

int main(void)
{
	//Declaring the array containing 5 elements.
	int intArray[5];

	//The array index starts at 0
	intArray[0] = 10;
	intArray[1] = 11;
	intArray[2] = 12;
	intArray[3] = 13;
	intArray[4] = 14;

	for (int i = 0; i < 5; i++)
		printf("The %d element of the array is %d\n", i, intArray[i]);

	return 0;
}
