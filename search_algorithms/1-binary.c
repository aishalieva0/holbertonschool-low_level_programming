#include "search_algos.h"

/**
 * binary_search - Search for value in sorted array of integers
 * @array: Array to search in
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index where value is located,
 *	   If value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, left, right;

	if (!array)
		return (-1);

	for (left = 0, right = (int)size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
