#include <stdio.h>
/**
 * main - entry
 * Return: (0) Success
*/
int main(void)
{
	int x;
	char alp;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar('0' + x);
	}
	for (alp = 'a' ; alp <= 'f' ; alp++)
	{
		putchar(alp);
	}
	putchar(' ');
	return (0);
}
