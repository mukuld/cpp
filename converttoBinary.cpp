#include <stdio.h>
#include <math.h>

void MakeBinaryString(char *outString, char valueToConvert)
{
	for (int i = 0; i < 8; i++)
	{
		if (valueToConvert & (1 << (7 - i)))
			outString[i] = '1';
		else
			outString[i] = '0';
	}

	outString[8] = '\0';
}

int main(void)
{
	char value = 5;
	char binaryString[6];

	MakeBinaryString(binaryString, value);
	
	printf("The binary equivalent of %d is %s\n", value, binaryString);

	return 0;
}
