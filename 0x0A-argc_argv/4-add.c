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
	int result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
				break;
			}
		}
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
