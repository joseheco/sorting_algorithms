#include "sort.h"

/**
 *selection_sort - sorts an array of integers.
 *@array: array of integer.
 *@size: array.
 */

void selection_sort(int *array, size_t size)
{
size_t i, j, temp, min;

for (i = 0; i < size; i++)
{
min = i;
for (j = i; j < size; j++)
{
if (array[j] < array[min])
min = j;
}
if (i != min)
{
temp = array[i];
array[i] = array[min];
array[min] = temp;
print_array(array, size);
}
}
}
