#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char sa, e, q;
                     
        e='e';
	q='q';

	for (sa = 'a' ; sa <= 'z' ; sa++)
	{
	if (sa != e && sa != q)
		
	putchar(sa);
		
		
	}
	putchar('\n');
	return (0);
}
