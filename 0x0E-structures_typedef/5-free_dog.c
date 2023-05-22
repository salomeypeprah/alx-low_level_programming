#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - write a function that frees dogs
 * @d: struct dog to freed
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

