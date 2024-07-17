#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: returns the target value if the search is successful,
 * otherwise, -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t end = size - 1;
	size_t start = 0, mid;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		print_array(array + start, size);

		mid	= start + (end - start) / 2;

		if (array[mid] > value)
			end = mid - 1;

		else if (array[mid] < value)
			start = mid + 1;

		else
			return (mid);

		size = end - start + 1;
	}

	return (-1);
}
/**
 * print_array - prints an array of integers
 * @array: a pointer to the first element of the array
 * @size: the number of elements in the array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	if (size == 0)
		printf("\n");

	for (i = 0; i < size - 1; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}
