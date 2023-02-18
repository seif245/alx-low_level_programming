#include <stdio.h>
/**
 * main - prints single digits in base 10
 * Return: Always O
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	printf("\n");
	return (0);
}
