#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
* new_dog - creates a new dog
* @name : name of the dogg
* @age: age of the dog
* @owner: owner of the doggo.
* Return: return dog1
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));

	if (doggo == NULL)
	{
		return (NULL);
		free(doggo);
	}
	doggo->name = malloc(sizeof(char) * strlen(name) + 1);
	if (doggo->name == NULL)
	{
		return (NULL);
		free(doggo);
	}
	doggo->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (doggo->owner == NULL)
	{
		return (NULL);
		free(doggo->name);
		free(doggo);
	}
	strcpy(doggo->name, name);
	strcpy(doggo->owner, owner);
	doggo->age = age;
	return (doggo);
	free(doggo);
	free(doggo->name);
	free(doggo->owner);
}
