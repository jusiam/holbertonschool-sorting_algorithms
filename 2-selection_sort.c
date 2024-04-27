#include "sort.h"

/**
 * swap_ints - swap two integer
 *
 * @a: first int to swap.
 *
 * @b: second int to swap.
 *
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sorts an array of integers in ascending order.
 *
 * @array: array of int
 *
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, b;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (b = i + 1; b < size; b++)
			min = (array[b] < *min) ? (array + b) : min;

		if (array + i != min)
			{
			swap_ints(array + i, min);
			print_array(array, size);
			}
	}
}
