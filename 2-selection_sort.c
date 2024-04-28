#include "sort.h"


/**
 * selection_sort - Sort an array of integers using the Selection
 * sort algorithm
 * @array: The array to be sorted
 * @size: The number of elements in the array
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t ind1, ind2, min;
	int temp, swap_status, min_flag;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (ind1 = 0; ind1 < size - 1; ind1++)
	{
		swap_status = 0;
		min_flag = 0;
		for (ind2 = ind1 + 1; ind2 < size; ind2++)
		{
			if (array[ind1] > array[ind2])
			{
				if (min_flag == 0)
				{
					min = ind2;
					min_flag = 1;
				}
				else
				{
					if (array[ind2] < array[min])
					{
						min = ind2;
					}
				}
				swap_status = 1;
			}
		}
		if (swap_status == 1)
		{
			temp = array[ind1];
			array[ind1] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
