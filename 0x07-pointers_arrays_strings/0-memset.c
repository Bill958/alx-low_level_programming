#include "main.h"

/**
 * _memset - Filling a block with a specific value
 * @s: memory area to be filled
 * @b: charactor desired
 * @n: number of time to copy b
 *
 * Return: changed array with a new value pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
