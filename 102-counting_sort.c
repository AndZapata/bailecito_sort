#include "sort.h"

size_t maximum(int *array, int size)
{

	int i = 0;
	int max = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}

	return ((size_t)max);
}

void counting_sort(int *array, size_t size)
{

	size_t i;
	size_t max = maximum(array, size);
	int *counting_array = malloc(sizeof(int) * (max + 1));
	int *array2 = malloc(sizeof(int) * (max + 1));
	int num = 0, tmp;

	if (!counting_array || !array2 || !array || size < 2)
	{
		free(counting_array);
		free(array2);
		return;
	}
	for (i = 0; i < size; i++)
		counting_array[array[i]]++;
	for (i = 0; i < size; i++)
		array2[array[i]]++;
	for (i = 0; i <= max; i++)
	{
		tmp = counting_array[i];
		counting_array[i] += num;
		num += tmp;
	}
	print_array(counting_array, max + 1);
	num = 0;
	i = 0;
	while (i <= size)
	{
		while (array2[num] > 0)
		{
			array[i] = num;
			array2[num]--;
			i++;
			if (i > size)
			{
				break;
			}
		}
		num++;
	}
}
