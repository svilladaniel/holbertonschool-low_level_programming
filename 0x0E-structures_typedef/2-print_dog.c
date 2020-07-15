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
		(d->name != '\0') ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		(d->age != '\0') ? (printf("age: %f\n", d->age)) : (printf("Age: (nil)\n"));
		(d->owner != '\0') ?  (printf("owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
