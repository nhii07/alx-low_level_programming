#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sa;

	for (sa = 'z'; sa >= 'a'; sa--)
	{
		putchar(sa);
	}
	putchar('\n');
	return (0);
}
