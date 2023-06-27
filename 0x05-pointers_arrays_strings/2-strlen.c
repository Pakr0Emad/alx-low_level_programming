#include <stdio.h>

/**
 * _strlen - returns a pointers to an int paramotoer
 *
 * and updates the value it points to 98
 *
 * @s: int paramenter
 *
 * Return: Nothing
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}

