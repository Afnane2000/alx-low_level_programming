#include "main.h"
/**
 *puts2 - function to swap the value
 *
 *
 *@str : parametre pointeur
 *
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
