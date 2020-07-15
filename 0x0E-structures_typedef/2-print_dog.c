#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)"));
		d->age ? (printf("age: %f\n", d->age)) : (printf("Age: (nil)"));
		d->owner ?  (printf("owner: %s\n", d->owner)) : (printf("Owner: (nil)"));
	}
}
