#include "main.h"

/**
 * _sqrt_recursion - prints string in reverse
 * square : fuctiom
 * @n: pointer to string
 * @val: square root
 * *Return: int
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * _sqrt_recursion - prints string in reverse
 * square : fuctiom
 * @n: pointer to string
 * @val: square root
 * *Return: int
*/

int square(int n, int val)
{

	if (val * val == n)
		return (val);
else if (val * val < n)
	return (square(n, val + 1));
	else
		return (-1);

}

