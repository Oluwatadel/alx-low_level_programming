#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function to initialise listed variables
 * @d: pointer to the struct
 * @name: variable one
 * @age: variable 2 with type float
 * @owner: variable 3 with type char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
		{
		d->name = name;
		d->age = age;
		d->owner = owner;
		}

}
