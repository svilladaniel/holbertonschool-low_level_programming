#include "stdio.h"

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf ("%d", a[b]);
		if (b != n-1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
