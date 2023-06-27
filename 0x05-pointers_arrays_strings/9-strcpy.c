#include <stdio.h>

/**
 * *_strcpy - print second half a strinf
 * @dest: shar arry string type
 * @src: shar arry string type
 * Description: print second half a strinf
 * the buffeer pointed to by 'dest'
 * Return: pointer to 'dest'
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
