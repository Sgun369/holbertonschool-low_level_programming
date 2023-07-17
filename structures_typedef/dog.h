#ifndef DOG
#define DOG
/**
 * struct dog - a struct named dog
 * @name :  name
 * @age:  age
 * @owner:  owner of the dog.
 *
 *
 * Description : longer description goes here.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};


typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
