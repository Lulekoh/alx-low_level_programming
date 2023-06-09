#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: 1st input value
 * @src: 2nd input value
 * @n: 3rd input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
