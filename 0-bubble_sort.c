#include "sort.h"

/**
 * bubble_sort - Sort the array of integrs in ascending order
 * @array: The array of integers to be sorted
 * @size: The size of the array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, hind, flag;

	if (array == NULL || size < 2)
	{
		return;
	}

	hind = size - 1;

	while (hind > 0)
	{
		flag = 0;

		for (i = 0; i < hind; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				flag = 1;

				print_array(array, size);
			}
		}

		if (flag == 0)
		{
			return;
		}
		hind--;
	}
}
