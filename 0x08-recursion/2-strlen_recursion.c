#include "main.h"

/**
 * _strlen_recursion - prints string in reverse
 * @s: pointer to string
 * *Return: void
*/

int _strlen_recursion(char *s)
{
int ntr = 0;

if (*s > '\0')
{
	ntr += _strlen_recursion(s + 1) + 1;
}
return (ntr);
}
