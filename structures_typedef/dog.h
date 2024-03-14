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

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

int _strlen(char *s);

char *_strcpy(char *dest, char *src);

#endif /* DOG_H */
