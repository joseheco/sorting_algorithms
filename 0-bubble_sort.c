#include "sort.h"

/**
 * bubble_sort - sort an array
 * @array: pointer
 * @size: size
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, size_copy;

	if (size < 2)
		return;

	size_copy = size - 1;
	while (size_copy != 0)
	{
		for (i = 0; i < size_copy; i++)
		{
			if (array[i + 1] < array[i])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		size_copy--;
	}
}
