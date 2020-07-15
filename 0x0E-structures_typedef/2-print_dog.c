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
		d != NULL ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		d != NULL ? (printf("age: %f\n", d->age)) : (printf("Age: (nil)\n"));
		d != NULL ?  (printf("owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
