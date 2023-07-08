#include "main.h"
#include <stdio.h>


/**
 *  is_prime_number.c - prints string in reverse
 * @othrn: int
 * @n: int
 * *Return: 0 or 1
*/

int check_prime(int n, int othrn);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}


/**
 *	is_prime_number.c - prints string in reverse
 * @othrn: int
 * @n: int
 * *Return: 0 or 1
*/

int  is_prime_number(int n)
{

	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}
