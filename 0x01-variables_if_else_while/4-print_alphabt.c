#include <stdio.h>
/**
 * main - entry point
 * Description: Get a random number and chaeck it
 * Return: 0 success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
