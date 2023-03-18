#include <stdio.h>

/**
 * main - prints alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sa;

	for (sa = 'a'; sa <= 'z'; sa++)
	{
		putchar(sa);
	}
	putchar('\n');
	return (0);
}
