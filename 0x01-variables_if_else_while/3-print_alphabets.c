#include <stdio.h>
/**
*main - entery
*Description: prints alphabets in lower case
*Return:Always if successful
*/
int main(void)
{
	char alphabet;
	char ALPHABET;

	alphabet = 'a';
	ALPHABET = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');

	return (0);
}
