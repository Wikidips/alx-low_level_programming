#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a pointer to the struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, b, n;
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		;
	for (b = 0; owner[b]; b++)
		;
	p->name = malloc(i + 1);
	p->owner = malloc(b + 1);

	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name), free(p->owner), free(p);
		return (NULL);
	}
	for (n = 0; n < i; n++)
	{
		p->name[n] = name[n];
	}
	p->name[n] = '\0';
	for (n = 0; n < b; n++)
	{
		p->owner[n] = owner[n];
	}
	p->owner[n] = '\0';
	p->age = age;
	return (p);
}

