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
	int r;
	int i = n;

	for (; r < i  ; r++)
	{
		dest[r] = src[r];
	}

	return (dest);
}
