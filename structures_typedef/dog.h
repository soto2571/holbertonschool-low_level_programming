#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Struct dog
 *@name: Name
 *@age: Age
 *@owner: Owner
 *@Breed: breed
 */
struct dog
{
	char *name;
	float age;
	char *owner;
	char Breed;
};

void print_dog(struct dog *d);

#endif /* DOG_H */
