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

	printf("Name: %s\n", d->name ? d->name : "(nil))";
	printf("Breed: %s\n", d->breed ? d->breed : "(nil))";
	printf("Age: %d\n", d->age);
}
