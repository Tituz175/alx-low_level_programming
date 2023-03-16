#include <stdio.h>
#include <stdlib.h>
/**
* main -> this is a function to print its name
* @argc: argc parameter
* @argv: an array of a command listed
* Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2, 1};
	int result = 0, num, i;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num = atoi(argv[argc - 1]);

	if (num < 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (num >= cents[i])
		{
			num -= cents[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
