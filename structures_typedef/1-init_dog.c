#include <stdio.h>
#include "dog.h"

/**
 *init_dog - Start of the function
 *@d: pointer
 *@name: char type
 *@age: float type
 *@owner: char type
 *Return: return
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
