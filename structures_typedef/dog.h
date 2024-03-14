#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Struct dog
 *@name: Name
 *@age: Age
 *@owner: Owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);

#endif /* DOG_H */
