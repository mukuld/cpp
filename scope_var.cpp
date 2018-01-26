#include <stdio.h>

int gAppReturnValue = 0;

int AreaOfSquare(int size)
{
	return size * size;
}

int main(void)
{
	int returnValue = 1;

	for (int i = 1; i <= 12; i++)
	{
		int area = AreaOfSquare(i);
		printf("The area of a square %d inches on a side is %d square inches.\n", i, area);
	}
	return gAppReturnValue;
}	
