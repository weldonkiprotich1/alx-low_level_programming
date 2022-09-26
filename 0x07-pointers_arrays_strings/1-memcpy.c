#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: dest positions
 * @src: source position
 * @n: size of bytes
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
