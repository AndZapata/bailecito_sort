#include "sort.h"

ssize_t tokens(int *array, ssize_t start, ssize_t end, size_t size)
{
	ssize_t num, j, tmp;
	int pivot;

	num = start - 1;
	pivot = array[end];
	for (j = start; j <= end - 1; j++)
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
	if (array[end] < array[num + 1])
	{
		tmp = array[end];
		array[end] = array[num + 1];
		array[num + 1] = tmp;
		print_array(array, size);
	}
	return (num + 1);
}

void iteraciones(int *array, ssize_t start, ssize_t end, size_t size)
{
	ssize_t num;

	if (start < end)
	{
		num = tokens(array, start, end, size);
		iteraciones(array, start, num - 1, size);
		iteraciones(array, num + 1, end, size);
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
