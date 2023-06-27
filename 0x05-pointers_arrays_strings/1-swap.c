#include <stdio.h>

/**
 * swap_int - swaps the values
 *
 * main - check the code for Holberton School students.
 *
 * @a:input parameter 1
 *
 * @b: input parameter 2
 *
 * Return: Nothig
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
