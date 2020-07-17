#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, i;
	dog_t *newdog;

	for(a = 0 ; name[a] != '\0' ; a++)
	{
	}
	for (b = 0 ; owner[b] != '\0' ; b++)
	{
	}
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(a * sizeof(newdog->name));
	if (newdog == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < a; i++)
	{
		newdog->name[i] = name[i];
	}
	newdog->age = age;
	newdog->owner = malloc(b * sizeof(newdog->owner));
	if (newdog == NULL)
	{
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < b; i++)
	{
		newdog->owner[i] = owner[i];
	}
	return (newdog);
}
