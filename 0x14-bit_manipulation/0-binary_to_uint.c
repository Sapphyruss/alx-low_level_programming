#include <main.h>
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
