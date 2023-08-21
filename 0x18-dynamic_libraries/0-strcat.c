#include "main.h"

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;

	while (dest[destlen] != '\0')
		destlen++;

	while (src[srclen] != '\0')
	{
		dest[destlen] = src[srclen];
		srclen++;
		destlen++;
	}

	dest[destlen] = '\0';
	return (dest);
}
