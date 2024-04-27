#include "sort.h"

/**
 * bubble_sort - array of integers in ascending order using bubble algorithm
 *
 * @array: Array integer to sort.
 *
 * @size: size of array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, b;
	int tmp;

	if (array == NULL || size < 2)
	{
		return;
	}

	while (i < size - 1)
	{
		b = 0;
		while (b < size - i - 1)
		{
			if (array[b] > array[b + 1])
			{
				tmp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = tmp;
				print_array(array, size);
			}
			b++;
		}
		i++;
	}
}
