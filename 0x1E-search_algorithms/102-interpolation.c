#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: returns the first index where value is located, otherwise, -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos = 0;

	if (array == NULL)
		return (-1);

	while (pos < size)
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (value < array[pos])
				high = pos;

			else if (value > array[pos])
				low = pos;

			else
				return (pos);
		}
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
