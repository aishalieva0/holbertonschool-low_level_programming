#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = (char *)malloc(strlen(name) + 1);

	if (newDog->name == NULL)
	{
		return (NULL);
	}

	strcpy(newDog->name, name);

	newDog->age = age;

	newDog->owner = (char *)malloc(strlen(owner) + 1);
	if (newDog->owner == NULL)
	{
		return (NULL);
	}
	strcpy(newDog->owner, owner);

	return (newDog);
}
