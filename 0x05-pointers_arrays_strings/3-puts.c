#include <stdio.h>

void reset_to_98(int *);

/**
 * _puts - check the code for Holberton School students.
 *
 * @str: dents
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
