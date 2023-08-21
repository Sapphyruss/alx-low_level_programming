#include "main.h"
#include <stddef.h>

char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;

	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
		if (s[j] == '\0')
		{
			return (NULL);
		}
	}
	return (0);
}
