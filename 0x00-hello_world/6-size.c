#include <stdio.h>
int main(void)
{
int i;
double d;
char c;
printf("Size of an int is: %lu.\n", (unsigned long)sizeof(i));
printf("Size of an double is: %lu.\n", (unsigned long)sizeof(d));
printf("Size of an char is: %lu.\n", (unsigned long)sizeof(c));
return (0);
}
