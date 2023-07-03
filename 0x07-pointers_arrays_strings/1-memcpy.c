#include "main.h"
/**
 *_memcpy - prints buffer in hexa
 *@dest: the address of memory to print
 *@src: the size of the memory to print
 *@n: value nbr
 *Return: pointeur.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; src[i] != '\0'  ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
