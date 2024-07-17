#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: returns the first index where value is located, otherwise, -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int m = sqrt(size);
	size_t i = 0, low = 0, high = low + m;

	if (array == NULL)
		return (-1);

	while (high < size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (value > array[low] && value > array[high])
		{
			low = high;
			high = low + m;
			continue;
		}

		printf("Value found between indexes [%ld] and [%ld]\n", low, high);
		for (i = low; i <= high; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
		return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	for (i = low; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
