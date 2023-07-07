#include "main.h"
/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: The input binary string.
 *
 * Description:
 *     The binary_to_uint function converts a binary string @b to its
 *     corresponding unsigned integer value. The binary string must consist
 *     only of '0' and '1' characters. If the input string @b is NULL or
 *     contains any characters other than '0' and '1', the function returns 0.
 *
 * Return:
 *     The converted unsigned integer value, or 0 if @b is NULL or contains
 *     invalid characters.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int b10 = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if ((*b != '0') && (*b != '1'))
			return (0);
		b10 = (*b - '0') | (b10 << 1);
		b++;
	}
	return (b10);
}
