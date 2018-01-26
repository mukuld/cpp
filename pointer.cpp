#include <stdio.h>

int main(void)
{
	int myInt = 5;

	//Declaring my first ever pointer
	int *uselessPointer = NULL;

	int *intPointer = &myInt;

	printf("intPointer's address is %p and contains the value %d.\n", intPointer, *intPointer);
}
