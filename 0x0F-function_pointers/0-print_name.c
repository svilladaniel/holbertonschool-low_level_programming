#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: a name
 * @f: is a function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
