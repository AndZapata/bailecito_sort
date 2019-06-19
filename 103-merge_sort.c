#include "sort.h"

void mergeSort(int i, int j, int a[], int aux[])
{

    int pointer_left;
    int pointer_right;
    int k;
    int mid;

    if (j <= i)
    {
        return;
    }
    mid = (i + j) / 2;

    mergeSort(i, mid, a, aux);
    mergeSort(mid + 1, j, a, aux);

    pointer_left = i;
    pointer_right = mid + 1;

    /*printf("%d\n", pointer_right);*/
    print_array(a, pointer_right);

    for (k = i; k <= j; k++)
    {
        if (pointer_left == mid + 1)
        {
            aux[k] = a[pointer_right];
            pointer_right++;
        }
        else if (pointer_right == j + 1)
        {
            aux[k] = a[pointer_left];
            pointer_left++;
        }
        else if (a[pointer_left] < a[pointer_right])
        {
            aux[k] = a[pointer_left];
            pointer_left++;
        }
        else
        {
            aux[k] = a[pointer_right];
            pointer_right++;
        }
    }

    for (k = i; k <= j; k++)
    {
        a[k] = aux[k];
    }
    
}

void merge_sort(int *array, size_t size)
{
    int aux[10000];

    mergeSort(0, (int)size - 1, array, aux);
}