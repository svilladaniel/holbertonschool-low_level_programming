#include "search_algos.h"
/**
 * binary_search - search value in an array using the Binary search algorithm
 * @array: pointer to the array
 * @size: array size
 * @value: value to match
 * Return: zero if success
 */
int binary_search(int *array, size_t size, int value)
{
	size_t side1 = size - 1;
	size_t side2 = 0;
	size_t half, num;

	if (array == NULL || !value)
		return (-1);

	while (side2 <= side1)
	{
		half = (side2 + side1) / 2;
		printf("Searching in array: ");
		for (num = side2; num <= side1; num++)
		{
			if (num != side1)
				printf("%d, ", array[num]);
			else
				printf("%d\n", array[side1]);
		}
		if (array[half] == value)
			return (half);
		if (array[half] < value)
			side2 = half + 1;
		else
			side1 = half - 1;
	}
	return (-1);
}
