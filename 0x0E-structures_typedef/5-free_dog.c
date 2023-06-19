#include <stdlib.h>
#include "dog.h"

/**
*free_dog - a function that frees the memory allocated to struct dog
*@d:pointer to struct dog being freed
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
