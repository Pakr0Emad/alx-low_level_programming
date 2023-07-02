#include "main.h"
/**
 * _stract - function that
 *
 * @dest: pointer to
 * @src: pointer to
 *
 * Return: pointer to &dest
 */

char *_stract(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/*iterate througt each src arry value without the null byte*/
	for (c2 = 0; src[c2] c2++)
		/*append src*/
		dest[c++] = src[c2];

	return (dest);
}
