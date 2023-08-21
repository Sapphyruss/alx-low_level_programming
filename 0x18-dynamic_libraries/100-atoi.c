#include "main.h"

int _atoi(char *s)
{
	int i = 0;
	int j;
	int sign = -1;
	int n = 0;


	while (s[i] != 0)
		i++;

	for (j = 0; j < i; j++)
	{
		if (s[j] == '-')
			sign *= -1;
		if (s[j] > 47 && s[j] < 58)
		{
			if (n < 0)
				n = (n * 10) - (s[j] - 48);
			else
				n = (s[j] - 48) * -1;

			if (s[j + 1] < 48 || s[j + 1] > 57)
				break;
		}
	}
	if (sign < 0)
		n *= -1;

	return (n);
}
