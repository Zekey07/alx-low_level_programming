#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %l byte(s)\n", sizeof(a));
	printf("size of an int: %l byte(s)\n", sizeof(b));
	printf("size of a long int: %l byte(s)\n", sizeof(c));
	printf("size of a long long int: %l byte(s)\n", sizeof(d));
	printf("size of a float: %l byte(s)\n", sizeof(f));
	return (0);
}
