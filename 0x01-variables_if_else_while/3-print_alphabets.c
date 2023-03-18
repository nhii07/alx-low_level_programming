#include <stdio.h>

/**
 * main - prints alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sa;

	for (sa = 'a'; sa <= 'z'; sa++)
		putchar(sa);
	for (sa = 'A'; sa <= 'Z'; sa++)
		putchar(sa);
	putchar('\n');
	return (0);
}
