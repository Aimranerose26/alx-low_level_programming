#include <stdio.h>
/**
*main - entery
*Description: prints alphabets in lower case
*Return: (0) if successful
*/
int main(void)
{
	char alphabet;
	
	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
