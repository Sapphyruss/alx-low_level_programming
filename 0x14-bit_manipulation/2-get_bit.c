#include "main.h"

/**
 * get_bit - get the bit at index
 * @n: number
 * @index: index to get the bit from
 * Return: 0 else 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(index) * 8)
	{
		return (-1);
	}
	while (index > 0)
	{
		n = n >> 1;
		index--;
	}
	return (n % 2);
}
