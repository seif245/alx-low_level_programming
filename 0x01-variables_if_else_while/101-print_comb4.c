#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
*/
int main(void)
{
	int n;
	int m;
	int a;

	for (a = 48; a < 56; a++)
	{
		for (n = a + 1; n < 57; n++)
		{
			for (m = n + 1; m < 58; m++)
			{
				putchar(a);
				putchar(n);
				putchar(m);
				if (a != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
