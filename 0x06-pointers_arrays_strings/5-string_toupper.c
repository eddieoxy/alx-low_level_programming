#include "main.h"
/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @n: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *n)
{
	int i = 0;

	for (i = 0; n[i] != '\0'; ++i)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
