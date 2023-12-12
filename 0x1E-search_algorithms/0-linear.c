#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of int
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 * Return: index of the value or -1.
*/
int linear_search(int *array, size_t size, int value)
{
	int x;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		x = array[i];
		printf("Value checked array[%ld] = [%d]\n", i, x);
		if (value == x)
		{
			return (i);
		}
	}
	return (-1);
}
