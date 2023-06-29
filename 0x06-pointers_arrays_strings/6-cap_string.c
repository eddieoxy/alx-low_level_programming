#include "main.h"
/**
 * cap_string - capitalizes most of the words in a string.
 * @n: analized string.
 *
 * Return: String with all words capitalized.
 */
char *cap_string(char *n)
{
	int i, j;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (*(n + i) != '\0')
	{
		if (*(n + i) >= 'a' && *(n + i) <= 'z')
		{
			if (i == 0)
			{
				*(n + i) = *(n + i) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(n + i - 1))
					{
						*(n + i) = *(n + i) - 32;
					}
				}
			}
		}
	i++;
	}
	return (n);
}
