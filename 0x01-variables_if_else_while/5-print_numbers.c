#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: print all single digit number of base 10
 * starting feom 0, followed by a new line.
 * Return: 0 success
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putcahar('\n');
	return (0);
}
