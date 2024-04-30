#include "sort.h"

/**
 * swap - Swap two int values
 * @array: The array of integers to be printed after swapping
 * @size: The array size
 * @x: The first int to be swapped
 * @y: The second int to be swapped
 *
 * Return: Nothing
*/
void swap(int *array, size_t size, int *x, int *y)
{
	int temp;

	if (*x != *y)
	{
		temp = *x;
		*x = *y;
		*y = temp;

		print_array((const int *)array, size);
	}
}

/**
 * split - Divide array in to parts using the pivot
 * @array: The array to be divided
 * @size: The array size
 * @start: Starting index
 * @end: End index
 *
 * Return: The pivot index
*/

size_t split(int *array, size_t size, size_t start, size_t end)
{
	int j, i;
	int pivot = array[end];

	for (i = j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			swap(array, size, &array[j], &array[i++]);
		}
	}

	swap(array, size, &array[i], &array[end]);
	return (i);
}
/**
 * sort_recursion - Sort an array recursively
 * @array: The array to be sorted
 * @size: The array size
 * @start: The starting index
 * @end: The ending index
 *
 * Return: nothing
*/
void sort_recursion(int *array, size_t size, ssize_t start, ssize_t end)
{
	size_t pivot;

	if (start < end)
	{
		pivot = split(array, size, start, end);
		sort_recursion(array, size, start, pivot - 1);
		sort_recursion(array, size, pivot + 1, end);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending order
 * @array: The array to be sorted
 * @size: The size of array
 *
 * Return: nothing
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	sort_recursion(array, size, 0, size - 1);
}
