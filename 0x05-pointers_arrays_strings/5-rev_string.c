#include "main.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
