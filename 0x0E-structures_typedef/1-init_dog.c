#include "dog.h"

/**
*init_dog - a function that initializes a variable
*@d:a pointer used to access the members of struct dog
*@name:first element
*@age:second element
*@owner:third element
*return:void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
