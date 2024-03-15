#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *_strlen - return lenght of a string
 *
 *@s:char type
 *Return: length of string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	return (a);
}
/**
 *_strcpy - copy the string
 *@dest: pointer to destination
 *@src: pointer to source
 *Return: return the value dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * *new_dog - function to create new dog struct
 *@name: chat type
 *@age: float type
 *@owner: char type
 *Return: Always success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
	return (NULL);
	}

	newDog->name = (char *)malloc(_strlen(name) + 1);
	if (newDog->name == NULL)
	{
	free(newDog);
	return (NULL);
	}
	_strcpy(newDog->name, name);

	newDog->owner = (char *)malloc(_strlen(owner) + 1);
	if (newDog->owner == NULL)
	{
	free(newDog->name);
	free(newDog);
	return (NULL);
	}
	_strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}
