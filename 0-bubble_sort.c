#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 * using the bubble algorithm
 *
 * @array: array to be ordered
 * @size: size of the array
 *
 * Return: void
*/

void bubble_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i, check;

	while (array)
	{
		check = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] <= array[i + 1])
				check++;
			else
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		if (check == size - 1)
			return;
	}
}
