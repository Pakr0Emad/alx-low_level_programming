#include "main.h"
#include <stdio.h>
/**
 * _stract - function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to scure input
 * @n: most number of byte from @src
 *
 * Return: @dest
 */

char *_stract(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;
	/**
	* src does not need to be null termineted
	* if it coutans n or more byte
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
		/*null terinate dest*/
		dest[c + i] = '\0';

	return (dest);
}

