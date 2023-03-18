#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s, a;

	for (s = 0; s < 100; s++)
	{
		for (a = 0; a < 100; a++)
		{
			if (s < a)
			{
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);
				putchar(' ');
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				if (s != 98 || a != 99)
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
