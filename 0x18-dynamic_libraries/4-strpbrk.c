#include "main.h"
#include <stddef.h>

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int s_len = 0, accept_len = 0;

	while (s[s_len] != 0)
		s_len++;

	while (accept[accept_len] != 0)
		accept_len++;

	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
