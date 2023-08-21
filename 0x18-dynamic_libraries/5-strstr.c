#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	int haystack_len = 0, needle_len = 0;
	int i, j;

	while (needle[needle_len] != 0)
		needle_len++;

	while (haystack[haystack_len] != 0)
		haystack_len++;

	for (i = 0; i < haystack_len; i++)
	{
		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (j == needle_len)
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
