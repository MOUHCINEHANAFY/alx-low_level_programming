#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct declaration of elements name, age, owner
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	float age;
	char *owner;
	char *name;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);

#endif
