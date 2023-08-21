#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i;

	while (dest[destlen] != 0)
		destlen++;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[destlen + i] = src[i];

	dest[destlen + i] = '\0';
	return (dest);
}
