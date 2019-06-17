#include "sort.h"

int tokens(int *array, int init, int last, size_t size)
{
	int num, j, tmp;
	int pivot;

	num = init - 1;
	pivot = array[last];
	for (j = init; j <= last - 1; j++)
	{
		if (array[j] <= pivot)
		{
			num++;
			if (num != j)
			{
				tmp = array[num];
				array[num] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[last] < array[num + 1])
	{
		tmp = array[last];
		array[last] = array[num + 1];
		array[num + 1] = tmp;
		print_array(array, size);
	}
	return (num + 1);
}

void iteraciones(int *array, int init, int last, size_t size)
{
	int num;

	if (init < last)
	{
		num = tokens(array, init, last, size);
		iteraciones(array, init, num - 1, size);
		iteraciones(array, num + 1, last, size);
	}
}

/**
 * quick_sort - Comment
 * 
 * @array: comment
 * @size: Comment
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	iteraciones(array, 0, size - 1, size);
}
