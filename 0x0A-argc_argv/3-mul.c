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
	int i;
	int result = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
