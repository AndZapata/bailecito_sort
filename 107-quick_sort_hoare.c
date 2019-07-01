#include "sort.h"

int partition(int *array, int init, int last, size_t size)
{
    int l, r;
    int pivot, tmp;

    pivot = array[last];
    l = init - 1;
    r = last + 1;
    while (1)
    {
        do
        {
            l++;
        } while (array[l] < pivot);
        do
        {
            r--;
        } while (array[r] > pivot);
        if (l >= r)
            return (l);
        tmp = array[l];
        array[l] = array[r];
        array[r] = tmp;
        print_array(array, size);
    }
}

void recursive_call(int *array, int init, int last, size_t size)
{
    int num;

    if (init < last)
    {
        num = partition(array, init, last, size);
        recursive_call(array, init, num - 1, size);
        recursive_call(array, num, last, size);
    }
}

void quick_sort_hoare(int *array, size_t size)
{
    if (!array || size < 2)
        return;
    recursive_call(array, 0, size - 1, size);
}
