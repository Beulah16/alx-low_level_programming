#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs
 * @d: pointer to dog_t type
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
