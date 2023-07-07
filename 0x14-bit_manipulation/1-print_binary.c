#include "main.h"

/**
 * print_binary - print the binary represention of a number.
 * @n: the number.
 * Return: none
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
