#ifndef dog_H
#define dog_H

/**
 * struct dog - Structure buddy
 *
 * @name: first charachteristic
 * @age: second charachteristic
 * @owner: third charachteristic
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
