#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * using Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 * The array is sorted by default. If value is not present
 * in array or if array is NULL, return -1. Use the square root of the size
 * of the array as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t index, jump_size;
	int i, idx, btwn;

	if (!array)
		return (-1);
	jump_size = sqrt(size);
	for (index = 0; index < size + jump_size; index += jump_size)
	{
		if (array[index] >= value)
		{
			btwn = index - jump_size;
			idx = index;
			printf("Value found between indexes [%d] and [%d]\n", btwn, idx);
			for (i = idx; i >= btwn; i--)
			{
				if (value == array[i])
				{
					while (value >= btwn)
					{
						printf("Value checked array[%d] = [%d]\n", btwn, btwn);
						btwn++;
					}
					return (i);
				}
			}
		}
		if (index > size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", size - 1, index);
			printf("Value checked array[%ld] = [%ld]\n", size - 1, size - 1);
			return (-1);
		}
		printf("Value checked array[%ld] = [%ld]\n", index, index);
	}
	return (-1);
}
