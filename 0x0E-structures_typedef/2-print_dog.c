#include "dog.h"
#include <stdio.h>

/**
 * print_dog - This function prints struct dog
 * @d: Poiter of struct dog
 */

void print_dog(struct dog *d)
{
	char *name, *owner;

	if (d)
	{
		owner = d->owner;
		name = d->name;

		if (!owner)
		{
			owner = "(nil)";
		}
		if (!name)
		{
			name = "(nil)";
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	}
}
