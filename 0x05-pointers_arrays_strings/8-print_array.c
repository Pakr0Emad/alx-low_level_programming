#include <stdio.h>

/**
 * print_array - print second half a strinf
 *
 * @n: shar arry string type
 * @a:shar arry string type
 * Description: print second half a strinf
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
