#include "search_algos.h"
/**
 * linear_search - search value in an array using the Linear search algorithm
 * @array: pointer to the array
 * @size: array size
 * @value: value to match
 * Return: zero if success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t counter;

	if (array == NULL || !value)
		return (-1);
	for (counter = 0 ; counter < size ; counter++)
	{
		printf("Value checked array[%li] = [%i]\n", counter, array[counter]);
		if (array[counter] == value)
		{
			return (counter);
		}
	}
	return (-1);
}
