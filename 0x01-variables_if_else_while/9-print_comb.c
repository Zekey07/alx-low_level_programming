#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all single number of base 10
 * starting from 0, followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
