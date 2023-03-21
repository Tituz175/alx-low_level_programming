#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: the struct dog to be printed.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name)
		{
			printf("%s\n", d->name);
		}
		else
		{
			printf("(nil)\n");
		}
		printf("Age: ");
		if (d->age)
		{
			printf("%f\n", d->age);
		}
		else
		{
			printf("(nil)\n");
		}
		printf("Owner: ");
		if (d->owner)
		{
			printf("%s\n", d->owner);
		}
		else
		{
			printf("(nil)\n");
		}
	}
}
