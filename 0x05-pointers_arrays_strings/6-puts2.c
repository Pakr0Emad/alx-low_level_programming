#include "main.h"

/**
 * puts2 - prints every characters of a string
 *
 * @str: string parameter input
 *
 * Return: Noyhing
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
