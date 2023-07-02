#include "main.h"
#include <stdio.h>

/**
 * islower - determens
 * @c: characters
 * Return: 1 if true, 0 if false
*/

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines
 * @c: character
 * Return: 1 if true, 0 if false
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = "\t\n,.!?\"() {} ";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - determines
 * @s: character
 * Return: 1 if true, 0 if false
*/

char cap_string(char *s)
{
	char *ptr = s;
	int foundDelimiter = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimiter = 0;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimi = 0;
		}
		else
			foundDelimi = 0;
		s++;
	}
	return (ptr);
}
