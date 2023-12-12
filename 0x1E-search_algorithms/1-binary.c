#include <stdio.h>
#include <stddef.h>

/**
 * print_array - print the array being searched
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
*/
void print_array(int *array, int size)
{
	int i;

	printf("Searching in array: %d", array[0]);
	for (i = 1; i < size; i++)
	{
		printf(", %d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search -  searches for a value in a sorted array of integers
 * @array:  pointer to the 1st element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index or -1
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int)size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		print_array((array + left), (right - left) + 1);
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else if (value > array[mid])
			left = mid + 1;
	}
	return (-1);
}
