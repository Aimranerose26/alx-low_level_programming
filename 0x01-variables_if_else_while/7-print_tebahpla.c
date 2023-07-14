#include <stdio.h>
/**
 * main - entry
 * Return: (0) Success
*/
int main(void)
{
	char AZ;

	for (AZ = 'z' ; AZ >= 'a' ; AZ--)
	{
		putchar(AZ);
	}
	putchar('\n');
	return (0);
}
