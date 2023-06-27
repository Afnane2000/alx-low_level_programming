#include "main.h"
/**
 **_strcpy - function to swap the value
 *
 *@dest : parametre pointeur
 *@src : parametre pointeur
 *
 *Return: return pointeur.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');
	 dest[i] = '\0';
	return (dest);
}
