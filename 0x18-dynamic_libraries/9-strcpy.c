#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i;
	int j = 0;

	while (src[j] != 0)
	{
		j++;
	}

	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
