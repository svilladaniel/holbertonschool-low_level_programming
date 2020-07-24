#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - calculator of +, -, *, /, %
* @argc: Number of argument
* @argv: arguments
* * Return: int
*/
int main(int arc, char **argv)
{
    int a, b, c;
    int (*opp)(int, int);

    if (arc != 4)
    {
        printf("Error\n");
        exit(98);
    }
    opp = get_op_func(argv[2]);
    a = atoi(argv[1]);
    b = atoi(argv[3]);
    if (opp == NULL)
    {
        printf("Error\n");
        exit(99);
    }
    if ((opp == op_div || opp == op_mod) && b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    c = opp(a, b);
    printf("%d\n", c);
    return (0);
}