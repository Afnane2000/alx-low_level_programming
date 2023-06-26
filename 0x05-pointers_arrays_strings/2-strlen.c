#include "main.h"
/**
 *_strlen - function to swap the value
 *
 *
 *@s : parametre pointeur
 *
 *Return: always 0.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0 ; *s != '\0' ; s++)
		i++;

	return (i);
}
