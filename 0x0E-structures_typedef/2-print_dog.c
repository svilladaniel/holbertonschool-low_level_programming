#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints the dog struct
 * @d: pointer to the dog struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (dog.name == NULL)
		{
			printf("Name: (nil)\n");
		}
		if (dog.age == NULL)
		{
			printf("Age: (nil)\n");
		}
		if (dog.owner == NULL)
		{
			printf("Owner: (nil)\n");
		}            
		/*d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		d->age ? (printf("age: %f\n", d->age)) : (printf("Age: (nil)\n"));
		d->owner ?  (printf("owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));*/
	}
}
