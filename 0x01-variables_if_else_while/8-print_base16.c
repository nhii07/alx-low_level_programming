#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char sa;

	for (a =32; a < 48; a++)
	{
		putchar(a);
	}
	for (sa = 'a'; sa <= 'f'; sa++)
	{
		putchar(sa);
	}
	putchar('\n');
	return (0);
}
