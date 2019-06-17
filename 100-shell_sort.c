#include "sort.h"

/**
 * shell_sort - Comment
 *
 * @array: comment
 * @size: Comment
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, dif;
	int temp;

	for (dif = size / 2; dif > 0; dif = (dif - 1) / 3)
	{
		for (i = dif; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= dif && array[j - dif] > temp; j = j - dif)
				array[j] = array[j - dif];
			array[j] = temp;
		}
		print_array(array, size);
	}
}
