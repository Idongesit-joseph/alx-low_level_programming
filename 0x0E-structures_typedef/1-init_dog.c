#include "dog.h"
#include <stdio.h>
/**
 *init_dog - start
 * @name: hfhgj
 * @age: hfhfh
 * @owner:ehdhd
 * @d: ugj
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
