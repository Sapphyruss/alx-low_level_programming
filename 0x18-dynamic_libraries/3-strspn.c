#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int s_len = 0;
	int accept_len = 0;
	int i, j, chr_yes;

	while (s[s_len] != 0)
		s_len++;

	while (accept[accept_len] != 0)
		accept_len++;

	for (i = 0; i < s_len; i++)
	{
		chr_yes = 0;
		for (j = 0; j < accept_len; j++)
		{
			if (accept[j] == s[i])
			{
				chr_yes = 1;
				length++;
				break;
			}
		}
		if (chr_yes == 0)
			break;
	}

	return (length);
}
