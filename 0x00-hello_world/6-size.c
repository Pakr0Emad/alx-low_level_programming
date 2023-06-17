#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Seccsess)
*/

int main(void)
{
printf("size of a char: %lu byts(s)\n", sizeof(char));
printf("size of an int: %lu byts(s)\n", sizeof(int));
printf("size of a long int: %lu byts(s)\n", sizeof(long int));
printf("size of a long long int: %lu byts(s)\n", sizeof(long long int));
printf("size of a float: %lu byts(s)\n", sizeof(float));
return (0);

}
