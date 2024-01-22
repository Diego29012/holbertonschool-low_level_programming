#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * using the Binary search algorithm.
 * @array: array of integers.
 * @size: number of integers in the array.
 * @value: value to find.
 * Return: the index of the target value or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
    if (!array || size == 0)
        return -1;

    size_t low = 0, high = size - 1;

    while (low <= high)
    {
        size_t mid = low + (high - low) / 2;

        printf("Searching in array: ");
        for (size_t i = low; i <= high; i++)
        {
            printf("%d", array[i]);
            if (i < high)
                printf(", ");
            else
                printf("\n");
        }

        if (array[mid] == value)
            return mid;

        if (value < array[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

