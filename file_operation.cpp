#include <stdio.h>

int FileExists(const char *path)
{
	if (!path)
		return -1;

	FILE *file = fopen(path, "r");

	int returnValue;

	if (!file || ferror(file) != 0)
		returnValue = 0;
	else
	{
		fclose(file);
		returnValue = 1;
	}

	return returnValue;
}

int MakeTestFile(const char *path)
{
	if (!path)
		return -1;

	FILE *file = fopen(path, "w");

	if (!file || ferror(file))
	{
		fprintf(stderr, "Couldn't create the file %s\n", path);
		return 0;
	}

	fprintf(file, "This is a file.\nThis is only a file.\n"
			"Had this been a real emergency, do you think I'd be around to tell you?\n");
	fclose(file);
	return 1;
}

int main(void)
{
	int returnValue = 0;

	const char *filepath = "/boot/home/MyTestFile.txt";

	if (!FileExists(filepath))
	{
		returnValue = MakeTestFile(filepath);
		if (returnValue != 1)
			return returnValue;
	}

	printf("Printing file %s:\n", filepath);

	FILE *file = fopen(filepath, "r");

	if (!file || ferror(file))
	{
		fprintf(stderr, "Couldn't print the file %s\n",filepath);
		return 0;
	}

	char inString[1024];

	while (fgets(inString, 1024, file))
		fprintf(stdout, "%s", inString);

	fclose(file);
	return 0;
}
