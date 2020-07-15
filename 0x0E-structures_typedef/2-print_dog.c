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
		(d->name) ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		printf("age: %f\n", d->age);
		(d->owner) ? (printf("owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
