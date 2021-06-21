#include "sort.h"

/**
 *partition - This function takes last element as pivot
 *@array: array to be sorted
 *@low: lowest index of the array's partition
 *@high: highest index of the array's partition
 *@size: size of the array
 *Return: partion's index
 */

size_t partition(int *array, size_t low, size_t high, size_t size)
{
int t, p;
size_t i, j;

t = array[high];
i = low - 1;

for (j = low; j < high; j++)
{
if (array[j] < t)
{
i++;
if (i != j)
{
p = array[i];
array[i] = array[j];
array[j] = p;
print_array(array, size);
}
}
}
if (array[high] < array[i + 1])
{
p = array[i + 1];
array[i + 1] = array[high];
array[high] = p;
print_array(array, size);
}
return (i + 1);
}

/**
 *quickSort - sort an array
 *@array: array
 *@low: lowest
 *@high: highest
 *@size: size
 */

void quickSort(int *array, size_t low, size_t high, size_t size)
{
size_t t;

if (low < high)
{
t = partition(array, low, high, size);
quickSort(array, low, t - 1, size);
quickSort(array, t + 1, high, size);
}
}

/**
 *quick_sort - sorts an array
 *@array: array
 *@size: array
 */

void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quickSort(array, 0, size - 1, size);
}
