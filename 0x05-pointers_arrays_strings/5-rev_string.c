#include <stdio.h>


/**
 * rev_string - check  parameter the code for Holberton School students.
 *
 * @s: string parameter input
 *
 * holberton!: parameter
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find string offer by */
	for (l = 0; s[l] != '\n'; ++l)
		;

	/*swap the string*/
	for (i = 0; i < l / 2; ++l)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /*-1 because the array starts from 0*/
		s[l - 1 - i] = temp;
	}
}
