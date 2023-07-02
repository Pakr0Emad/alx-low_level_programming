#include "main.h"
#include <stdio.h>
/**
 * _stract - A function that copies a string
 * _stract _ description that copys arrays and pointers
 * @dest: pointer to destination input buffer
 * @src: pointer to scure input buffer
 * @n: byte of @src
 *
 * Return: &dest
 */

char *_stract(char *dest, char *src, int n)
{
	int i;
	/**
	* iterate throught src array
	* where if there is no null byte
	* among the first n bytes of source
	* the string placed in dest will not be
	* null termenate
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	/**
	* if the length of source is less than n
	* write additional nullbytes to dest to
	* ensure taht a total of n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

