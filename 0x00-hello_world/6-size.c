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

	printf("size of a char: %ln byte(s)\n", sizeof(a));
	printf("size of an int: %ln byte(s)\n", sizeof(b));
	printf("size of a long int: %ln byte(s)\n", sizeof(c));
	printf("size of a long long int: %ln byte(s)\n", sizeof(d));
	printf("size of a float: %ln byte(s)\n", sizeof(f));
	return (0);
}
