#include "search_algos.h"

void print_array(int *array, size_t left, size_t right)
{
    printf("Searching in array: ");
    for (size_t i = left; i <= right; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int binary_search(int *array, size_t size, int value)
{
    if (!array)
        return (-1);

    size_t left = 0;
    size_t right = size - 1;
    size_t mid;

    print_array(array, left, right);
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
        print_array(array, left, right);
    }
    return (-1);
}
