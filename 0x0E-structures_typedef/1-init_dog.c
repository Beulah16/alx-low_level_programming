#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to dog type
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *Dog;

	Dog = d;
	Dog = malloc(sizeof(struct dog));
	if (Dog == NULL)
		return (NULL);
	Dog->name = name;
	Dog->age = age;
	Dog->owner = owner;
}
