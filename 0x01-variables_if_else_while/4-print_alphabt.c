#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: 'the program's description'
 *@void: describe the parameter
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int c = 0;
	for (c = 97 ; c < 123 ; c++)
	{
		if ((c != 'q') && (c != 'e'))
			putchar(c);
	}
	putchar('\n');
	return (0);
}
