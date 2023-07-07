#include "main.h"

/**
 * clear_bit - change the bit to 0 at given index
 * @n: pointer to the number
 * @index: index to change the bit at
 * Return: 1 success and -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(index) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
