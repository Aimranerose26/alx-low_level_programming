#include <stdio.h>

/**
 * main - entry
 *Description: writing function that prints 10 times the alphabet.
 *Return: (0) success
 */

void print_alphabet_x10(void)
{
	int alph, o;

	alph = 0;

	while (alph < 10)
	{
		alph++;
			for (o = 'a' ; o <= 'z' ; o++)
			{
				_putchar(alph);
			}
		o++;
		_putchar('\n');
	}
}
