#include<unistd.c>
#include<stdio.h>
/**
 * main - prints and that piece of art is useful  - Dora Korpar, 2015-10-1
 * Return: 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 96);
	return (1);
}
