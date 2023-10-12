#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: a pointer to a struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int i;
	int c;

	i = 0;
	c = 0;
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	
	newDog->age = age;
	for (i = 0, c = 0; name[i] != '\0'; i++)
		c++;
	
	newDog->name = malloc(sizeof(char) * (c + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; 1 ; i++)
	{
		(*(newDog->name + i)) = name[i];
		if (name[i] == '\0')
			break;
	}

	for (i = 0, c = 0; owner[i] != '\0'; i++)
		c++;
	newDog->owner = malloc(sizeof(char) * (c + 1));
	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}

	for (i = 0; 1 ; i++)
	{
		(*(newDog->owner + i)) = owner[i];
		if (owner[i] == '\0')
			break;
	}

	return (newDog);
}
