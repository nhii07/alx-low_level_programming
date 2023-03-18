#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */

int main(void)

{

	char sn, e, q;
                     
	e='e';
	q='q';

	for (sn = 'a' ; sn <= 'z' ; sn++)
	{
	if (sn != e && sn != q)
	putchar(sn);
	}
	putchar('\n');
	return (0);
}
