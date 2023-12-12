#include <stddef.h>
#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 * @array:  pointer to the 1st element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: the index or -1.
*/
int jump_search(int *array, size_t size, int value)
{
	int x, jump, i, j;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	jump = sqrt((int)size);
	for (i = 0; i < (int)size; i += jump)
	{
		x = array[i];
		if (value <= x)
			break;
		printf("Value checked array[%d] = [%d]\n", i, x);
	}
	printf("Value found between indexes [%d] and [%d]\n",  i - jump, i);
	for (j = i - jump; j <= i && j < (int)size; j++)
	{
		x = array[j];
		printf("Value checked array[%d] = [%d]\n", j, x);
		if (value == x)
		{
			return (j);
		}
	}
	return (-1);
}
