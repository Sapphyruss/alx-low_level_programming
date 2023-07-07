#include "main.h"

/**
 * get_endianness - determine if the machine uses small or big endianness
 * Return: 1 small endianness, 0 bigg endianness
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c == 0x01)
	{
		return (1);
	}
	return (0);
}
