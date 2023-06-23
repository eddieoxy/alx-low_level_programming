#include "main.h"

/**
 * print_numbers - print the numbers from 0 up to 9
 * Return: the numbers from 0 up to 9
 * example: 0,1,2,3,4,5,6,7,8,9
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	_putchar(x + '0');
	}
	_putchar('\n');
}
