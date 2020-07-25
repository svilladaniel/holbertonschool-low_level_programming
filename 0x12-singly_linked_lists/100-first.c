#include <stdio.h>
/**
 * le_lievre - ex. a code before main is ex.
 * @void:doesnt recieve anything
 */
void le_lievre(void)__attribute__ ((constructor));
void le_lievre(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
