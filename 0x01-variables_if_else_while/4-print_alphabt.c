#include <stdio.h>

/**
 * main - prints alphabet in lowercase,
 * followed by a new line 
 * except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char sa = 'a';

	while (sa <= 'z')
	{
		if (sa != 'e' && sa != 'q')
		{
			putchar(sa);
		}
		sa++;
	}
	putchar('\n');
	return (0);
}
