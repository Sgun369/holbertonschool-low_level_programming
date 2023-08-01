#include "dog.h"

/**
 * init_dog - a function that initialize a variable
 *	of type struct dog.
 *@d: pointer
* @name: name of the dog
* @owner: owner of the dog
* @age: age of the dog.
* Return: void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}