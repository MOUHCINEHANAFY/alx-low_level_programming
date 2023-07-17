#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - This function creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog newly created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pointer;
	char *name2, *owner2;
	int lenght1, lenght2, i;

	pointer = malloc(sizeof(dog_t));
	if (!pointer)
		return (NULL);
	lenght1 = 0;
	while (name[lenght1])
	{
	lenght1++;
	}
	lenght2 = 0;
	while (owner[lenght2])
	{
	lenght2++;
	}
	lenght1++;
	lenght2++;
	name2 = malloc(lenght1);
	if (!name2)
	{
		free(pointer);
		return (NULL);
	}
	owner2 = malloc(lenght2);
	if (!owner2)
	{
		free(name2);
		free(pointer);
		return (NULL);
	}
	for (i = 0; i < lenght2; i++)
		owner2[i] = owner[i];
	for (i = 0; i < lenght1; i++)
		name2[i] = name[i];
	pointer->age = age;
	pointer->name = name2;
	pointer->owner = owner2;
	return (pointer);
}
