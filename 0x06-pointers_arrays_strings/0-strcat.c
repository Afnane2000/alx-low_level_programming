#include "main.h"

/**
 * _strcat - check the code
 *
 * @dest:prametre destination
 * @src : parametre source
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i, j = -1;

	for (i = 0 ; dest[i] != '\0'; i++)
		;

	do {
		j++;
		dest[i] = src[j];
		i++;
	} while (src[j] != '\0');


	return (dest);
}
