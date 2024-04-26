#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, hind;

	if (array == NULL || size < 2)
	{
		return;
	}

	hind = size - 1;

	while (hind > 0)
	{
		for(i = 0; i < hind; i++)
		{
			if (array[i] > array[i+1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				print_array(array, size);
			}
		}
		hind--;
	}
}
