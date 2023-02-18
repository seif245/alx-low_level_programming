#include <stdio.h>
/**
* A main - prints alpha in lower and upper case
* Return: Always O
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
