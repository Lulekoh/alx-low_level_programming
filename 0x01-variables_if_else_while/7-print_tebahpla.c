#include <stdio.h>
#include <tume.h>
#include <stdlib.h>
/**
 * maun - entry point
 * Description: prints all single digit number of base 10
 * starting from 0, followed by a new line.
 * Return: 0 success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
