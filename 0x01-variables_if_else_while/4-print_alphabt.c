#include <stdio.h>
/**
*main - entery
*Return:Always if successful
*/
int main(void)
{
	char alphabet;

	alphabet = 'a';

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');

	return (0);
}
