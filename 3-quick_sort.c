#include "sort.h"

/**
 * quick_sort - Comment
 *
 * @array: comment
 * @size: Comment
 * Return: Nothing
 */

int Lomuto(int *a, int l, int r, size_t size)
{
	int i, j, p, t;

	p = a[r];
	i = l;

	for(j = l; j <= r-1; j++) {
		if(a[j] <= p) {
			t = a[j];
			a[j] = a[i];
			a[i] = t;
			i++;
			print_array(a, size);
		}
	}
	t = a[i];
	a[i] = a[r];
	a[r] = t;

	return i;

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
	Lomuto(array, array[0], array[size], size);
}
