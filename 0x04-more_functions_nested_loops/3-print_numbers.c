#include <main.h>
/**
 * print_numbers - function that prints the numbers from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int d;

	d = 0;

	while (d++)
	{
		_putchar(d + '0');
	}
	_putchar('\n');
}
