#include "main.h"

/**
 * print_to_89 - print n to 89 counts
 *			seprated by comma, followed
 *			by space and number should be
 *			printed in order
 *
 * @n: input
*/

void print_to_89(int n)
{
	int count;

	if (n > 89)
		for (count = n; count > 89; count--)
			printf("%d, " count);
	printf("89\n");
}
