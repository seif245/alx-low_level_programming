#include <stdio.h>
/**
 * main - all possible different combinations of two digits
 * Return: Always 0
*/
int main(void)
{
	int n;

	int m;

	for (n = 0; n < 9; n++)
	{
		for (m = 1; m < 10; m++)
		{
			putchar(n);
			putchar(m);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
