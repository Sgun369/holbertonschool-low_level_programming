#include "dog.h"
#include <stddef.h>
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer to the struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (new)
		return (NULL);
	
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);

}
