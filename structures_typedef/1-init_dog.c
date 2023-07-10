#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - Initializes a variable
 *@d: Assignable
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner of dog
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
