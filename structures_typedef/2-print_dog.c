#include <stdio.h>
#include "dog.h"
/**
 *print_dog - Start of the program
 *@d: Pointer
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	if (d->Breed)
		printf("Breed: %s\n", d->Breed);
	else
		printf("Breed: (nil)\n");
	printf("Age: %f\n", d->age);
}
