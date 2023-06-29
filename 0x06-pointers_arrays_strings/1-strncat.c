#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the code
 *
 * @dest: parametre1
 * @src : parametre2
 *@n : namber of char
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;

	while (j < n && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	dest[i + 1] = '\0';
	return (dest);
}
