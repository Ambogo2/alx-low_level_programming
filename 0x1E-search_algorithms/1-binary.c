#include "search_algos.h"

/**
 * print_array - a function that prints an array
 * @array: the array to print
 * @left: the starting index of the array to print
 * @right: the ending index of the array to print
 */
void print_array(int *array, size_t left, size_t right)
{
    size_t i;

    printf("Searching in array: ");
    for (i = left; i <= right; i++)
    {
        printf("%d", array[i]);
        if (i < right)
        {
            printf(", ");
        }
    }
    printf("\n");
}

/**
 * binary_search - a function that searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t mid;

    if (array == NULL)
    {
        return (-1);
    }

    while (left <= right)
    {
        print_array(array, left, right);
        mid = left + (right - left) / 2;

        if (array[mid] == value)
        {
            return (mid);
        }
        else if (array[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return (-1);
}
