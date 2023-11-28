#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to dog type
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	if (d->name == NULL)
		printf("Name: \(nil\)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == NULL)
		printf("Age: \(nil\)\n");
	else
		printf("Age: %lf\n", d->age);

	if (d->owner == NULL)
		printf("Owner: \(nil\)\n");
	else
		printf("Owner: %s\n", d->owner);
}
