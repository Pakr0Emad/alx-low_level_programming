#include <stdio.h>

/**
 * print_rev - check the code for Holberton School students.
 *
 * @s: pointers
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
