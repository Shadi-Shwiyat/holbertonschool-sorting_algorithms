#include "sort.h"

/**
 * selection_sort - sorts an array of integers
 * using the selection algorithm
 *
 * @array: array to be ordered
 * @size: size of the array
 *
 * Return: void
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, index, temp;

	for (i = 0; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[index] > array[j])
				index = j;
		}
		if (index != i)
		{
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
			print_array(array, size);
		}
	}
}
