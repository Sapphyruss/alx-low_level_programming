#include "main.h"

/**
 * flip_bits - count the number of bits needed to change a number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m, i = 0;

	while (a > 0)
	{
		i += a & 1;
		a >>= 1;
	}
	return (i);
}
