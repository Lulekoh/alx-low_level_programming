#include <stdio.h>
/**
 * main - entry point
 * Description: print all single digit number of base 10
 * starting feom 0 to 9 followed by a new line.
 * Return: 0 success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putcahar('\n');
	return (0);
}
