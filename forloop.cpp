#include <stdio.h>

int main(void)
{
	int number = 0;

	//The loop
	for (int i = 1; i < 10; i++)
	{
		number += i;
		printf("At step %d, the number is now: %d\n", i, number);
	}
}
